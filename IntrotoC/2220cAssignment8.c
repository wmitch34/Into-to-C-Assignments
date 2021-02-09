#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
	int health;
	int armorRating;
	int earnedXP;
} ENEMY;

int RandomInt(int min, int max) {
	return  min + rand() % (max+1 - min);
}

void printArray(int* count, ENEMY* enemy) {
	printf("Created Enemy %02i   ", *count);
	printf("Hit Points: %i   ", enemy->health);
	printf("Armor: %i   ", enemy->armorRating);
	printf("Experience points: %i\n", enemy->earnedXP);
}


void main(){
	int enemyCount, i, totalXP= 0;

	srand(time(NULL));

	printf("How many enemies to create?  ");
	scanf_s("%i", &enemyCount);

	ENEMY *dynamicArray;
	dynamicArray = calloc(enemyCount, sizeof(ENEMY));

	for (i = 0; i < enemyCount; i++) {
		dynamicArray->health = RandomInt(50, 100);
		dynamicArray->armorRating = RandomInt(12, 22);
		dynamicArray->earnedXP = ((dynamicArray->health)*(dynamicArray->armorRating)/50);
		printArray(&i, dynamicArray);
		totalXP = totalXP + dynamicArray->earnedXP;
	}
	printf("Total XP for this level: %i\n", totalXP);
	free(dynamicArray);
	system("pause");
}
