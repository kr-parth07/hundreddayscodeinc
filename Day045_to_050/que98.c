// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a full name: ");
    scanf("%[^\n]", str);  

    
    if (str[0] != ' ') {
        printf("%c.", str[0]);
    }

    int lastSpace = -1;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            lastSpace = i;
            printf("%c.", str[i + 1]);  
        }
        i++;
    }

    if (lastSpace != -1) {
        printf(" %s\n", &str[lastSpace + 1]);
    } else {
        printf("\n");
    }

    return 0;
}