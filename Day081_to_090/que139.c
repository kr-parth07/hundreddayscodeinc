// Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include<stdio.h>

enum result {
    sucess, failure, timeout
};

int main(){
    printf("SUCESS = %d, FAILURE = %d, TIMEOUT = %d\n", sucess, failure, timeout);  
    return 0;
}