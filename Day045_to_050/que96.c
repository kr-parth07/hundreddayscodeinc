// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *word_start = NULL;
    int i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);  

    while (str[i] != '\0') {
        if (word_start == NULL && str[i] != ' ') {
            word_start = &str[i];  
        }

        if (word_start && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            reverse(word_start, &str[i]);  
            word_start = NULL;
        }

        i++;
    }

    printf("Reversed words: %s\n", str);

    return 0;
}