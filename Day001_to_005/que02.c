// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    int a,b, sum, diff, product, quotient;
    printf("Enter two number");
    scanf("%d %d" , &a, &b);
    sum= a+b;
    printf("The sum of two number is %d\n" , sum);
    diff= a-b;
    printf("The diff of two number is %d\n" , diff);
    product= a*b;
    printf("The product of two number is %d\n" , product);
    quotient= a/b;
    printf("The quotient of two number is %d\n" , quotient);


    return 0;
}