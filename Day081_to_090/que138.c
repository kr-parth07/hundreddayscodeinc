// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include<stdio.h>

enum colors{
    Red, Orange, Yellow, Green, Blue, Indigo, Violet
};

int main(){
    enum colors c;
    const char* colorNames[] = {
        "Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"
    };
    int i;
    for(i=Red; i<=Violet; i+=1){
        printf("%s = %d\n", colorNames[i], i);
    }  
    return 0;
}