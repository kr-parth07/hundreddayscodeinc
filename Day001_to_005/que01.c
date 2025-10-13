//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>

int main(){
    int x,y, sum;
    printf("Enter the number x");
    scanf("%d", &x);
    printf("Enter the number y");
    scanf("%d", &y);
    sum= x+y;
    printf("The sum of %d and %d is %d\n" , x,y,sum);
    return 0;
}
