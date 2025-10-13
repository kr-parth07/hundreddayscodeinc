/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main(){
    int num, binary = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        int digit = num % 2;
        binary += digit * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary: %d\n", binary);

    return 0;
}