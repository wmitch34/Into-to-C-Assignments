#include <stdio.h>
#include <stdlib.h>
//Constant variables
#define MEASURMENTS 27
#define MEASURMENTS2 31

int main(){
    int i = 0, year = 2020;
    //data set 1 lives here
    double seaLevel[MEASURMENTS] = {-31.01, -25.61, -25.64, -24.32, -19.76, -23.50, -14.86, -13.66, -9.63, -4.98, -1.41,
     1.11, 5.06, 5.80, 5.91, 10.37, 15.95, 11.42, 19.52, 29.47, 27.98, 34.57, 44.45, 44.36, 49.27, 51.89, 55.24};
    //data set 2 lives here
    double predictedLevel[MEASURMENTS2];
    double totalDifference = 0, averageDifference, difference, nextProjection = 55.24;

    printf("This program uses data from NASA Science to predict sea level from the years 2020 to 2050.\n");
    //loop through array subtracting each value from the next starting at value 0
    for(i = 0; i < 26; i++){
        difference = seaLevel[i + 1] - seaLevel[i];
    //difference vaules are added up here
        totalDifference += difference;
    }
    //differences are averaged
    averageDifference = totalDifference / MEASURMENTS;
    //display the 2 values that were just calculated
    printf("\nThe total difference in sea level from 1993-2019 is %.2lf.\n", totalDifference);
    printf("The average difference in sea level from 1993-2019 is %.2lf.\n", averageDifference);
    printf("\nBased on this average and a linear increase model, the\nprojected sea levels up to 2050 are:\n");
    //this loop adds the average increase in sea level for each year up to 2050 to generate the predicted sea level
    for( i = 0; i < MEASURMENTS2; i++){
        nextProjection = nextProjection + averageDifference;
        predictedLevel[i] = nextProjection;
            //This if statement ensures that only the desired data is displayed
            if (year % 5 == 0){
                printf("%i:  %.2lf\n",year, predictedLevel[i]);
            }
            year++;
    }
    //credits and link
    printf("\nThese predictions were made using data provided by Nasa Science at\nhttps://climate.nasa.gov/vital-signs/sea-level/. accessed Novermber 14, 2019.\n");
    system("pause");
}
