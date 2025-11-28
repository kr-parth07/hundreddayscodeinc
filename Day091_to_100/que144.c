//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include<stdio.h>

struct students {
    char name[50];
    int roll;
    float marks;
};

void stu_record(struct students stu){
    printf("Record of student:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", stu.name, stu.roll, stu.marks);
}

int main(){
    struct students stu;
    printf("Enter Name:  ");
    scanf("%s", stu.name);
    printf("Enter Roll Number:  ");
    scanf("%d", &stu.roll);
    printf("Enter Marks:  ");
    scanf("%f", &stu.marks);
    printf("\n");
    stu_record(stu);
    return 0;
}