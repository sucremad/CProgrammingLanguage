#include <stdio.h>


void drop(int *, int);

int main(){

    // Create a program that takes a number and drop the numbers according to another input from right.
    // number  : 123456
    // counter : 3
    // result  : 123

    int number;
    int counter;

    printf("Enter a number :");
    scanf("%d",&number);

    printf("Enter a count :");
    scanf("%d",&counter);

    printf("Before number= %d\n",number);
    drop(&number,counter);
    printf("After number= %d\n",number);

    return 0;
}

void drop(int *number, int counter){

    for (int i = 1; i <= counter; ++i) {
        *number = *number/10;
    }

}