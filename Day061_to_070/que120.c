//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void sentence_case(char str[100]){
    int capitalize = 1; 
    for (int i = 0; str[i] != '\0'; i+=1) {
        if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]); 
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1;
        } else {
            capitalize = 0;
        }
    }
    printf("Sentence case string:\n%s\n", str);
}

int main(){
    char str[100];
    printf("Enter a sentance: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\n");
    printf("The actual string is: \n%s\n", str);
    sentence_case(str);
    return 0;

}
