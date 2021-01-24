#include <stdio.h>

int main(){

    // print that:
    // *
    // **
    // ***
    // ****
    // *****

    for (int i = 1; i < 6 ; i++) {
        for (int j = 1;j <= i ;j++){
            printf("*");
        }
        printf("\n");
    }

    // palindrom times
    int hour_tens;
    int hour_units;
    int minute_tens;
    int minute_units;


    for (int i = 0; i < 24; i+=1) {
        hour_tens = i/10;
        hour_units = i %10;
        for (int j = 0; j < 60; j+=1) {
            minute_tens = j /10;
            minute_units = j % 10;
            if (hour_units == minute_tens && hour_tens == minute_units){
                printf("%d%d : %d%d \n",hour_tens,hour_units,minute_tens,minute_units);
            }
        }
    }

    return 0;
}