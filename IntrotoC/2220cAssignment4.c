#include <stdio.h>
#include <stdlib.h>
//Function for calculating the value of base^power
int exponent(int x, int y) {
	int result = 1, i;
	for (i = y; i > 0; i--){
		result *= x;
	}
	return result;
}
//main requests user input to use as values for a function
//the return value of the function is then displayed to user
void main() {
	int base, power;

	printf("Enter an integer base: ");
	scanf_s("%i", &base);

	printf("\nEnter an integer exponant: ");
	scanf_s("%i", &power);

	printf("\n%i to the power of %i = %i\n\n", base, power, exponent(base, power));

	system("pause");
}
