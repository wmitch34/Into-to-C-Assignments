#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PI 3.1415926535897932

typedef struct{
	double yaw;
	double pitch;
	double roll;
} EULER;

EULER radiansToDegrees(EULER*);
EULER degreesToRadians(EULER*);
void printVector(EULER*);

EULER radiansToDegrees(EULER *pRadians) {
	EULER degrees;
	degrees.yaw = pRadians->yaw * 180 / PI;
	degrees.pitch = pRadians->pitch * 180 / PI;
	degrees.roll = pRadians->roll * 180 /PI;
	return degrees;
}

EULER degreesToRadians(EULER *pDegrees) {
	EULER radians;
	radians.yaw = pDegrees->yaw * PI / 180;
	radians.pitch = pDegrees->pitch* PI / 180;
	radians.roll = pDegrees->roll* PI / 180;
	return radians;
}

void printVector(EULER *pResults) {
	printf("Angle value: (%.6lf, %.6lf, %.6lf)\n", pResults->yaw, pResults->pitch, pResults->roll);
}

void main() {

	EULER degrees;
	EULER resultDegreesToRadians;
	EULER resultRadiansToDegrees;

	printf("Enter Yaw angle in degrees: ");
	scanf_s("%lf", &degrees.yaw);
	printf("Enter Pitch angle in degrees: ");
	scanf_s("%lf", &degrees.pitch);
	printf("Enter Roll angle in degrees: ");
	scanf_s("%lf", &degrees.roll);

	resultDegreesToRadians = degreesToRadians(&degrees);
	printVector(&resultDegreesToRadians);

	resultRadiansToDegrees = radiansToDegrees(&resultDegreesToRadians);
	printVector(&resultRadiansToDegrees);

	system("pause");
}
