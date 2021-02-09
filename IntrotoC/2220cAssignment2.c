
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int birthYear, currentYear=2020, age;
	//int x=1;
	//QOL loop for testing.
	//while (x == 1) {
		printf("\nPlease Enter the year that you were born.\n");
		scanf_s("%i", &birthYear);
		printf("You were born in %i.\n", birthYear);

		age = currentYear - birthYear;

		printf("You are %i years old.", age);

		if (birthYear < 0 || birthYear > 2020)
			printf(" Invalid entry.\n\n");
		else if (age <= 7)
			printf(" Seems a little young to be grading my C homework.\n\n");
		else if (age >= 122)
			printf(" Congratulations! You  are the oldest human being alive.\n\n");
		else
			printf("\n\n");
	//}
	system("pause");
}
