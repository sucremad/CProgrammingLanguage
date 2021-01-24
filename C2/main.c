#include <stdio.h>

int main(){

    /*If-Else-Else if*/

    //Even or Odd?
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);


    //if you have one-line command, you don not need to put curly braces

    if (number % 2 ==0)
        printf("even\n");
    else
        printf("odd\n");

    //Negative or positive?

    if (number < 0){
        printf("Negative\n");
    }
    else if (number > 0){
        printf("Positive\n");

    }
    else
        printf("Number is zero\n");


    /* ?: Ternary Conditional */

    /*
     * usage:
     * operand1 ? operand2 : operand3 ;
     *
     *
     * example:
     * c = a > b ? a : b ;
     *
     * that means:
     *
     * if(a>b)
     *  c = a;
     * else
     *  c = b;
     *
     * */

    number > 0 ? printf("Positive\n") : printf("Negative\n");

    /* switch -case */

    /*
     * usage:
     * switch(expression) {
     *  case <value1>:
     *      commands;
     *      break;
     *      .
     *      .
     *      .
     *  case <valueN>:
     *      commands;
     *      break;
     *
     *  default:            //it behaves like else.
     *      commands;
     * }
     *
     * */

    switch (number) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;

        default:
            printf("number is not 1,2 or 3.\n");
    }


    return  0;
}

