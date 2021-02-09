#include <stdio.h>
#include <stdlib.h>

int convertToBinary(int x) {
	int exponent = 128;

	while (exponent > 0){
		if (x >= exponent) {
			printf("1");
			x = x - exponent;
		}
		else if (x < exponent) {
			printf("0");
		}
		exponent = exponent / 2;
	}

}

void main() {
	int userInput = 1;

	while (userInput != -1){
		printf("\nEnter a whole number less that 256 (-1 to quit): ");
		scanf_s("%i", &userInput);
		printf("%i in binary: ", userInput);
		convertToBinary(userInput);
	} 
	system("pause");
}
