#include <stdio.h>

int main(){

    /*
     * usage:
     *
     * do{
     *  command;
     *  }
     * while (condition);
     *
     * even if condition is not true, loop runs once time.
     *
     * */

    // Calculate the average score using scores entered by the user
    // If user entered -1 program will finish.

    float score;
    float sum = 0;
    int counter = 0;
    float average;



    do {
        printf("Enter the scores: ");
        scanf("%f",&score);
        if (score != -1){
            sum += score;
            counter++;
        }

    }while (score != -1);

    average = sum / counter;
    printf("Average: %.2f",average);

    return 0;
}