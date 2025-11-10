// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')) {
            specials++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, specials);

    return 0;
}