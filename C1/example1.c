#include <stdio.h>

//Let's practice

int main() {

    /*
     * Create a program that takes two integer
     * different from zero and calculates the harmonic mean (2ab)/(a+b)
     * and printss on the screen.
     * */
    float num1,num2;
    float mean;
    printf("Enter two number that are integers: \n");
    scanf("%f\n%f",&num1,&num2);
    mean = (2*num1*num2)/(num1+num2);
    printf("Harmonic mean is: %.2f",mean);

    return 0;
}