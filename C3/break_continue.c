#include <stdio.h>

int main(){

    /*
     * break;
     *      it stops the loop.
     *
     * continue;
     *      all the commands in loop after this command are ignored and we come to the beginning of the loop.
     *
     */


    for (int i; i < 10 ; i++){
        printf("%d\n",i);
        if (i == 6)
            break;  // If it was not here, it would stop when i=9
    }
    printf("*******************************\n");

    for (int j=0; j < 10 ; j++){
        if (j == 3 || j == 6){
            continue; // If it was not here, 3 and 6 would be in the output.
        }
        printf("%d\n",j);
    }

    return  0;
}
