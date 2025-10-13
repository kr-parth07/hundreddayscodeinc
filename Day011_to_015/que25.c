/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>

int main(){
    char ch;
    double a , b;
    printf("Enter the number and symbol: \n");
    scanf("%lf %lf %c", &a , &b , &ch);
    
    switch (ch){
        case '+':
        printf("%.2f+ %.2f = %.2f", a ,b , a + b);
        break;
        case '-':
        printf("%.2f- %.2f  = %.2f", a ,b , a - b);
        break;
        case '*':
        printf("%.2f* %.2f  = %.2f", a ,b , a * b);
        break;
        case '/':
        if( b != 0)
            printf("%.2f/ %.2f  = %.2f", a ,b , a / b);
        else
            printf("Error! Division by zero is not allowed.\n");
        break;
        case '%':
        if((int)b != 0)
            printf("%d %% %d = %d\n", (int)a, (int)b , (int)a % (int)b );
        else printf("Error! Modulus by zero is not allowed");
        break;
        
        default:
        printf("Error! Invalid Operator");
    }
    return 0;
}