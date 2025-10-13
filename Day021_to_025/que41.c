//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>

int main(){
    int X , n, first, last, swapped, pow=1;
    printf("Enter a number: ");
    scanf("%d", &X);
    n = X;
    last = n % 10;

    while (n >= 10){
        n = n/10;
        pow = pow * 10;
    }
    first = n;

    swapped = last * pow + (X % pow)/10 *10 + first;
    printf("Number after swapping first and last digit: %d\n" , swapped);
    return 0;
}