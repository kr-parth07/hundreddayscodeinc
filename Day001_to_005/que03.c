//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){

    int l,b;
    printf("Enter length\n");
    scanf("%d", &l);
    printf("Enter bredth\n");
    scanf("%d", &b);
    printf("The area of rectangle is %d\n" , l*b);
    printf("The perimeter of rectangle is %d\n" , 2*(l+b));

    return 0;

}