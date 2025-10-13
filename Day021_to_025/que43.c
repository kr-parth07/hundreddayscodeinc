//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int main(){
    int num, n, i, digit, fact, sum =0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

    while( n > 0){
        digit = n % 10;
        fact =1;
    for( i = 1; i <= digit; i++ ){
        fact = fact * i;
    }
    sum = sum + fact;
    n = n/10;
    }
    if(sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);    

    return 0;
}