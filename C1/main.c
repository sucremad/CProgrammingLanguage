#include <stdio.h>

int main() {
    /* DO NOT FORGET THE SEMICOLON ";"  */

    /* Basic data types */
    int age=15;
    char firstname[] = "Alice";
    float number = 1.2;
    double dob = 89.56;

    //Constants
    const int NUM = 6;


    /* printf & placeholders */

    // % [prefix][width][.sensitivity]<format character>

    // prefixes = [+ , - , 0]


    printf("Hello, World!\n");

    printf("My age is %d \n", age);
    printf("My name is %s\n",firstname);
    printf("Without sensitivity: \n");
    printf("The float number is %f\n",number);
    printf("With sensitivity: \n");
    printf("The float number is %.2f\n",number);
    printf("The double number is %lf\n",dob);


    // GETTING INPUT

    //usage:
    //scanf("%s%f",&name,%gpa)

    char name[20];
    float gpa;
    printf("Please enter name and gpa respectively\n");
    scanf("%s\n%f",&name, &gpa);
    printf("Your name : %s\n",name);
    printf("Your gpa : %.2f\n", gpa);
    return 0;
}
