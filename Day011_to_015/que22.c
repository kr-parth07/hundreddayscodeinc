//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main(){
    int SP , CP;
    float Profit, Loss;
    printf("Enter the Selling Price and Cost Price:\n");
    scanf("%d %d" , &SP, &CP);
    
    if( SP > CP ){
        Profit = ((float)(SP - CP) / CP)*100;
        printf("Profit is %.2f%%", Profit); 
    }
    else if( CP > SP ){
        Loss  = ((float)(CP - SP) / CP)*100;
        printf("Loss is %.2f%%", Loss );
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}