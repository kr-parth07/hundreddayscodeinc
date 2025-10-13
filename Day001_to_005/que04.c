// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main()
{
    float r, Area, circumference;
    printf("Enter the value of r\n");
    scanf("%f", &r);
    Area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area: %f\n", Area);
    printf("circumference: %f\n", circumference);

    return 0;
}