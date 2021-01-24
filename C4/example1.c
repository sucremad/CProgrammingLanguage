#include <stdio.h>

int facto(int );

int main(){

    //find factorial
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("%d\n",facto(number));
    return 0;
}

int facto(int number){
    int result = 1;
    for (int i = 2; i <= number; ++i) {
        result*=i;
    }
    return result;
}