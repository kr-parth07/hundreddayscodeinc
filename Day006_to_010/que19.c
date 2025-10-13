//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>

int main(){
    float a, b, c;
    printf("Enter the three number\n");
    scanf("%f %f %f", &a ,&b ,&c);
    if( a+b > c && a+c > b && b+c > a){
        if( a == b && b == c ){
        printf("The Triangle is Equilateral");
    }
    else if( a == b || b == c || c == a){
        printf("The Triangle is Isoscelse\n");
    }
    else if( a != b || b != c || c != a){
        printf("The Triangle is Scalene");
    }
    else{
        printf("The Triangle is Invalid");
    }

    }
    
    return 0;
}