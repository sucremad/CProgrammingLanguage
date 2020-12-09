#include <stdio.h>

//prototips of functions.
void print_func ();
int sum (int, int);

int main(){

    /*
     * [typeoffunc]<funcname> ()parameters { }
     *
     * */

    print_func();
    printf("Sum is %d\n",sum(3,6));



    return 0;
}

// print 3 times "Functions"
void print_func (){
    for (int i = 0; i < 3; ++i) {
        printf("Functions\n");
    }
}

//return sum of two integers
int sum (int number1, int number2){
    return number1 + number2;
}