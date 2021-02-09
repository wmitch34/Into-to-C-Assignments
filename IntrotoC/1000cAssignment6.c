#include <stdio.h>
#include <stdlib.h>
main(){
//    //Create a loop that will output all the multiples
//    //of 5 that are greater than 0 and less than 60.
//    int a = 5;
//    while (a < 60){
//        printf("%i\n", a);
//        (a += 5);
//    }
//    printf("\n");
//    //Create a loop that will output all the numbers less
//    //than 200 that are evenly divisible by both 2 and 7.
//    int b = 14;
//    while (b < 200){
//        printf("%i\n", b);
//        b += 14;
//    }
//    printf("\n");
//    //Create a loop that will calculate the sum of the multiples
//    //of 8 that are between 100 and 500. Output the sum only.
//    int count = 13, sum, total = 0;
//    while (count <= 62){
//        sum = count * 8;
//        count++;
//        total += sum;
//    }
//    printf("%i\n", total);
//    printf("\n");
//    //Create a loop that will output the sum of all odd
//    //numbers between 20 and 100.
//    int d = 21, total1 = 0;
//    while (d < 100){
//        total1 += d;
//        d+= 2;
//    }
//    printf("%i\n", total1);
//    printf("\n");

    double input, lowest, highest;

    scanf("%lf", &input);
    lowest = input;
    highest = input;
    do{
    scanf("%lf", &input);
    if (input < lowest){
        lowest = input;
    }
    if (input > highest){
        highest = input;
    scanf("%lf", &input);
    }
    }while(input != 0);
    printf("The lowest number is %lf\n", lowest);
    printf("The highest number is %lf\n", highest);
    system("pause");
}
