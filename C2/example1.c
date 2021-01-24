#include <stdio.h>

int main(){

    float Truen,Falsen;


    printf("True: ");
    scanf("%f", &Truen);
    printf("False: ");
    scanf("%f", &Falsen);

    float net;
    float minus  = Falsen/4;
    net = Truen - minus;

    printf("Your net is %.2f \n",net);

   if (net < 10){
       printf("Beginner");

   }

   else if (10<=net && net<30){
       printf("Elementary");
   }

   else if (30 <= net && net < 50){
       printf("Preintermediate");
   }
   else if (50<=net && net <70){
       printf("Intermediate");

   }
   else
       printf("Upper");

    return 0;
}

