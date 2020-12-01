#include <stdio.h>

int main(){

    // Calculate the GCD and LCM of two numbers - 	greatest common divisor & 	least common multiple

    int big;
    int small;
    int remainder;
    int lcm;

    printf("Enter two integer:\n");
    scanf("%d\n",&big);
    scanf("%d",&small);

    lcm = big * small;

    if (small>big){
        int bigger = big;
        big=small;
        small = bigger;
    }


    for (int i = 0; i < 10; ++i) {
        remainder=big%small;
        big=small;
        small=remainder;
        if (remainder==0)
            break;

    }

    printf("GCD : %d\n",big);

    // Calculate the LCM of two numbers - least common multiple
    // LCM = (x*y)/GCD(x,y)

    lcm = lcm / big;

    printf("LCM : %d",lcm);

    return 0;
}
