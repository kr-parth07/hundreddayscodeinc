//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int num, X = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        X = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                X = 0;
                break;
            }
        }
    }

    if (X)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}