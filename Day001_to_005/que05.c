//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float C , F;
    printf("Enter the value of C\n");
    scanf("%f", &C);
    F = (C* 9/5) + 32;
    printf("%f degree Celsius is the value of %f degree Fahrenheit\n", C,F);
   
    return 0;
}