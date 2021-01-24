#include <stdio.h>

int main(){

    // Take the student number,midterms and finals.
    // Calculate each students average and letter grade and general average then print them.
    int total;
    float midterm;
    float final;
    int counter=1;
    float sum = 0;
    int a=0,b=0,c=0,f =0;
    float av;

    printf("Total students:");
    scanf("%d",&total);
    printf("\n");
    while (counter <= total){
        printf("[Student %d]  Midterm and Final respectively: ",counter);
        scanf("%f%f",&midterm, &final);
        av = (midterm*4/10)+(final*6/10);
        sum+=av;
        av = (av/25);
        counter++;
        if (av < 2)
            f++;
        else if (2 <= av && av < 2.5)
            c++;
        else if (2.5 <= av && av < 3.5)
            b++;
        else if (av >= 3.5)
            a++;


    }
    printf("Average: %.2f\n",sum/total/25);
    printf("F: %d\nC: %d\nB: %d\nA: %d\n",f,c,b,a);

    return 0;
}