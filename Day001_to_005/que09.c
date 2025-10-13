//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    int P,R,T;
    float SI , CI;
    printf("Enter the value P\n");
    scanf("%d" , &P);
    printf("Enter the value R\n");
    scanf("%d" , &R);
    printf("Enter the value T\n");
    scanf("%d" , &T);
    SI = (P*R*T)/100.00;
    CI = P * pow(((1+(R/100.0))), T ) - P;
    printf("The Simple intrest is: %.2f \n and Compound Interest is : %.2f", SI, CI);
    return 0;
}