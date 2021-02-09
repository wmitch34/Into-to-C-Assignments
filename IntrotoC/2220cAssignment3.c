#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RAINFALL_COUNT 5
void main()
{
	double rainfallArray[RAINFALL_COUNT] = { 0.0 };
	int i;
	double nextRainfall = 0.0;
	double totalRainfall = 0.0;
	double average = 0.0;
	//"difference" is average rainfall minus each specific array item
	double difference;
	double differenceSquared;
	//"sum" is the sum of all "differenceSquared"
	double sum = 0;
	double standardDeviation;

	for (i = 0; i < RAINFALL_COUNT; i++) {
		printf("Enter the next rainfall amount: ");
		scanf_s("%lf", &nextRainfall);
		rainfallArray[i] = nextRainfall;
		totalRainfall += nextRainfall;
	}

	average = totalRainfall / RAINFALL_COUNT;

	for (i = 0; i < RAINFALL_COUNT; i++) {
		difference = average - rainfallArray[i];
		differenceSquared = difference * difference;
		sum += differenceSquared;

	}
	
	standardDeviation = sqrt(sum / RAINFALL_COUNT);

	printf("Total Rainfall: %.2lf\nAverage Rainfall: %.2lf\n", totalRainfall, average);
	printf("Standiard Deviation: %lf\n", standardDeviation);
	system("pause");
}
