//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    int a, b, X;
    printf("Enter the value a and b\n");
    scanf("%d,%d" , &a, &b);
    X = a;
    a = b;
    b = X;
    printf("The swap of two number is %d, %d\n" , a, b, X);
    return 0;
}