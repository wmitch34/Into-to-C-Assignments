#include <stdio.h>
#include <stdlib.h>

int main(){
    double input, lowest, highest, average, total = 0;
    int count = 0;
    printf("Enter any number of values that are greater than 0.\n");
    //This first "do" loop exists to ensure that the initial inputs assign
    //valid values to the "lowest", "highest", and "input" variables.
    do{
        printf("Enter a number (0 to quit):");
        scanf("%lf", &input);
        if (input < 0){
            printf("That is not a valid input.\n");
        }else{
            lowest = input;
            highest = input;
        }
    }while (input < 0);
    //This second loop begins once a valid value has been input. It adjusts
    //the "lowest" and "highest" variables as well as creating a running
    //total inputs ("count") and running total sum to calculate the average.
    while (input != 0){
        if (input < 0){
            printf("That is not a valid input.\n");
            }else{
                count++;
                total += input;
                average = (total / count);
                if (input < lowest)
                    lowest = input;
                if (input > highest)
                    highest = input;
            }
        printf("Enter a number (0 to quit):");
        scanf("%lf", &input);
    }
    if (count != 0){
        printf("You entered %i number(s).\n", count);
        printf("The lowest number entered was %.2lf.\n", lowest);
        printf("The highest number entered was %.2lf.\n", highest);
        printf("The Average of all entered data is %.2lf.\n", average);
    }else{
        printf("\nOof\n.");
    }
    system("pause");

}
