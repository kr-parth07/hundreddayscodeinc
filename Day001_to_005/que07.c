//Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d" , &a, &b);
    b = a +b;
    a = b-a;
    b = b-a;
    printf("The swap of two number is %d %d\n" , a ,b);
    return 0;
}