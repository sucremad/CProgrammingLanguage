#include <stdio.h>

int main(){

    // print the ASCII equivalents of the numbers between 65 and 90
    printf("ASCII\tUPPER\tLOWER\n");
    for (int i = 65; i < 91 ; ++i) {
        printf("%d\t%c\t %c \n",i,i,i+32);

    }

    printf("----------------------------------\n");


    // print the decimal,octal,hexadecimal equivalents of numbers between 0 and 16
    printf("DECIMAL\tOCTAL\tHEXADECIMAL\n");
    for (int i = 0; i < 17 ; ++i) {
        printf("%d\t%o\t %x \n",i,i,i);

    }

    return 0;
}
