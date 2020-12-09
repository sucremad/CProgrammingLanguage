#include <stdio.h>   // input,output
#include <math.h>    //pow,log10
#include <stdbool.h> //bool

bool isNarcissisticNumber(int number);

int main(){


    printf("%d\n",isNarcissisticNumber(153));
    printf("%d\n",isNarcissisticNumber(1634));
    printf("%d\n",isNarcissisticNumber(54748));
    printf("%d\n",isNarcissisticNumber(111));


    return 0;
}

//An n-digit number that is the sum of the nth powers of its digits is called an n-narcissistic number.
// example: 153 = 1^3 + 5^3 + 3^3
bool isNarcissisticNumber(int number) {
    int nDigits = ( number==0 ) ? 1 : (int)log10(number)+1;
    int sum=0;
    int num=number;

    while(number != 0){
        sum += pow((number %10),nDigits);
        number=number/10;
    }
    return sum == num ? true : false;


}

