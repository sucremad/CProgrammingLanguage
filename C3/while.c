#include <stdio.h>

int main(){

    /*
     * usage:
     *
     * while(condition){
     *
     * command1;
     * command2;
     *  .
     *  .
     *  .
     *  commandn;
     *
     * }
     *
     * */

    int counter = 1;
    int sum = 0;
    float scores = 0;
    int number_of_scores = 0;
    float average;
    float choice;

    // print the numbers up to 10
    while(counter <= 10){
        printf("Counter: %d \n",counter);
        counter += 1;
    }

    // Calculate sum of the numbers up to 100

    while (counter <= 100){
        sum = sum + counter;
        counter++;
    }
    printf("Sum: %d \n",sum);

    // Calculate the average score using scores entered by the user
    // If user entered -1 program will finish.


    printf("Enter scores:");
    scanf("%f",&choice);


    while (choice != -1 ){
        scores+=choice;
        number_of_scores++;
        printf("Enter scores:");
        scanf("%f",&choice);

    }

    average = scores/number_of_scores;
    printf("Average: %.2f",average);

    return 0;
}

