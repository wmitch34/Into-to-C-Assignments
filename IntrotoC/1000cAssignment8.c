#include <stdio.h>
#include <stdlib.h>
int main(){
    //create necessary variables.
    double input, average, smallest, largest, sum = 0;
    int choice, count = 1, quit = 0;
    //The program lives in a loop that can be terminated
    //from the menu.
    while (quit != 1){
        printf("Please enter 5 numbers:\n");
        scanf("%lf", &input);
        //prime the values of smallest, largest, and sum
        //for future use
        smallest = input;
        largest = input;
        sum = input;
        //This loop exists to capture the input values
        //and generate final values for the information
        //that we want to display. The average value needs
        //to be calculated outside of the loop.
        while (count < 5){
            count++;
            scanf("%lf", &input);
            sum = sum + input;
            if (input < smallest)
                smallest = input;
            if (input > largest)
                largest = input;
        }
        average = (sum / 5.0);
        //This 'do' loop generates the switch menu.
        //It can display a few things as well as
        //restart the input loop and end the program.
        do{
            printf("\nWould you like to:\n");
            printf("1. Display the smallest number\n");
            printf("2. Display the largest number\n");
            printf("3. Display the sum of the entered numbers\n");
            printf("4. Display the average of the entered numbers\n");
            printf("5. Enter new numbers\n");
            printf("6. Quit\n");
            printf("\n");
            printf("Choose an option 1-6: ");
            scanf("%i", &choice);
            printf("\n");
            switch(choice){
                case 1:
                    printf("The smallest number is %.2lf\n", smallest);
                    break;
                case 2:
                    printf("The largest number is %.2lf\n", largest);
                    break;
                case 3:
                    printf("The sum of the numbers is %.2lf\n", sum);
                    break;
                case 4:
                    printf("The average of the numbers is %.2lf\n", average);
                    break;
                case 5:
                    //Resetting the count lets us back into the user input loop
                    (count = 1);
                    break;
                case 6:
                    //changing the value of quit ends the program.
                    (quit = 1);
                    break;
                default:
                    //Default sends an error message for invalid inputs, but
                    //unfortunately does not catch non int inputs. The program
                    //will infinitely loop on float or string inputs here.
                    printf("That is not a valid option.\n");
                    break;
            }
            printf("\n");
        //The menu will reappear after a selection is made, unless
        //options 5 or 6 are selected.
        }while (choice != 5 && choice != 6);
    }
    system("pause");
}


