#include <stdio.h>
#include <stdlib.h>2

void display(int x){
    x++;
    printf("The value of x is %i.\n",x);
    return;
}
int main(){
    int x = 5;
    display(x);
    display(x * x);

    return 0;
}
//    int count = 0, passing = 0;
//    double score, rate;
//    //primer for the loop
//    printf("Enter test scores(-1 to quit):");
//    scanf("%lf", &score);
//    //loop begins
//    while(score != -1){
//        if (score > 100 || score < -1){
//            printf("That is not a valid grade!\n");
//        }else
//            if (score >= 70){
//                (count += 1);
//                (passing += 1);
//            }else{
//                (count += 1);
//        }
//        printf("Enter test scores(-1 to quit):");
//        scanf("%lf", &score);
//    }
//    //calculating pass rate
//    rate = (((double) passing / (double) count) * 100);
//    //display the number of passing grades input w grammar in mind
//    if(passing != 1){
//        printf("You entered %i passing grades.\n", passing);
//    }else{
//        printf("You entered %i passing grade.\n", passing);
//    }
//    //displaying the pass-rate in percentage only if valid data has been input
//    if (count != 0){
//        printf("%.1lf%% of the valid grades entered are passing grades.\n", rate);
//    }
//    system("pause\n");


//int num1 = 5;
//    switch (num1){
//        case 1:
//            printf("happy");
//            break;
//        case 2:
//            printf("sad");
//            break;
//        case 3:
//            printf("laugh");
//            break;
//        default:
//            printf("cry");
//            break;
//    }

