#include <stdio.h>

int main(){

    /*
     * usage:
     *
     * for(loop_variable = first_value ; loop_condititon ; step_quantity) {
     * commands;
     * }
     *
     * */

    // print 5 times "C Language"

    for (int i = 0; i < 5; i++) {
        printf("C Language\n");
    }

    // Find if the entered number prime or not.

    int number;
    int flag=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    for (int i =2; i<number; i++){
        if (number % i == 0){
            flag ++;
            printf("Not a prime number!");
            break;
        }

    }
    if (!flag)
        printf("Prime Number");



    return 0;
}
