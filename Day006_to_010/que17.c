//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>

int main(){
    int a, b ,c, T , R;
    double X;
    printf("Enter the three number:\n");
    scanf("%d %d %d", &a, &b, &c);
    X = pow((b) , 2) - 4*a*c ;
    if( X > 0 ){
        T = (-b + pow(pow(b,2) - 4*a*c , 1/2 ))/2*a;
        R = (-b - pow(pow(b,2) - 4*a*c , 1/2 ))/2*a;
        printf("Roots are real and differnt: %d %d", T,R );
    }
    else if( X == 0 ){
        T = -b/2*a;
        R = T;
        printf("Root are real and same: %d %d" , T ,R);
    }
    else{
        printf("Roots are Imaginary");
    }
    return 0;
}