#include <stdio.h>
#include <ctype.h> // for tolower() function


int main(){
    char choice;
    const float pi = 3.14;
    float radius,side, base,h;
    printf("-----------MENU-----------\n"
           "-    'C' or 'c' Circle      -\n"
           "-    'T' or 't' triangle    -\n"
           "-    'S' or 's' square      -\n"
           "--------------------------\n");
    printf("Your choice : ");
    scanf("%c",&choice);

    switch (tolower(choice)) {
        case  'c':
            printf("Enter the radius: ");
            scanf("%f",&radius);
            printf("Area: %.2f",pi*radius*radius);
            break;
        case 't' :
            printf("Enter the base: ");
            scanf("%f",&base);
            printf("Enter the height: ");
            scanf("%f",&h);
            printf("Area: %.2f",base*h/2);
            break;
        case  's':
            printf("Enter the side: ");
            scanf("%f",&side);
            printf("Area: %.2f",side*side);
            break;

    }
}