#include <stdio.h>

int main(){
    /*
     * Create a program that takes radius(cm) and center angle value (x)
     * and calculates the scanned area then prints on the screen.
     * π = 3.14
     * formula:
     * (πr2 * x/360)
     * */

    const float pi = 3.14;
    float radius, angle;
    double area;
    printf("Radius(cm): \n");
    scanf("%f",&radius);
    printf("Angle: \n");
    scanf("%f", &angle);

    area = pi*radius*radius*angle/360;
    printf("Area: %.3lf cm2",area);

    return 0;

}
