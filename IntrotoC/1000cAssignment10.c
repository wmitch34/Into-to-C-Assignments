#include <stdio.h>
#include <stdlib.h>

//This first function houses the F to C conversion
double toCelsius(){
    double result, C;
    printf("Enter a temperature in Fahrenheit:  ");
    scanf("%lf", &result);
    (C = (5.0 / 9.0) * (result - 32.0 ));
    printf("\nThat is %.2lf degrees Celsius\n", C);
    return result;
}
//This second function houses the C to F conversion
double toFahrenheit(){
    double result, F;
    printf("Enter a temperature in Celsius:  ");
    scanf("%lf", &result);
    (F = (9.0 / 5.0) * result + 32.0);
    printf("\nThat is %.2lf degrees Fahrenheit\n", F);
    return result;
}
//This third and final Function houses the switch menu loop
//and calls the first two functions at user request.
main(){
    int choice, quit = 0;

    while(quit!= 1){
        printf("\nWould you like to: \n");
        printf("1: Convert Fahrenheit to Celsius\n");
        printf("2: Convert Celsius to Fahrenheit\n");
        printf("3. Quit\n");
        printf("Choose an option 1-3\n");
        printf("Your choice: ");
        scanf("%i", &choice);
        switch(choice){
            case 1:
                toCelsius();
                break;
            case 2:
                toFahrenheit();
                break;
            case 3:
                printf("Goodbye.\n");
                quit = 1;
                break;
            default:
                printf("That is an invalid input.");
                break;
       }
    }
   system("pause");
}
