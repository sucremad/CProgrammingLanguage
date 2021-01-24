#include <stdio.h>

int GCD(int,int);

int main(){

    int number1,number2;
    printf("Enter a number1: ");
    scanf("%d",&number1);
    printf("Enter a number2: ");
    scanf("%d",&number2);

    printf("%d \n", GCD(number1,number2));


    return 0;
}

int GCD(int num1, int num2){

    if (num2>num1){
        int bigger = num1;
        num1=num2;
        num2 = bigger;
    }

    if (num1 % num2 == 0)
        return num2;
    else
        return GCD(num2,num1%num2);




}