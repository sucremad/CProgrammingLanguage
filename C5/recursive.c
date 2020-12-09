#include <stdio.h>

int facto(int);

int main(){

    printf("%d",facto(5));

    return 0;
}
// recursive functions call themselves.
int facto(int number){
    if (number == 1 || number == 1)
        return 1;
    else
        return number * facto(number-1);
}