#include <stdio.h>

int fibo(int);

int main(){

    printf("%d",fibo(6));

    return 0;
}

// Find the Fibonacci's nth number.
int fibo(int number){
    if (number == 0 || number == 1)
        return number;
    else
        return fibo(number-1)+fibo(number-2);
}
