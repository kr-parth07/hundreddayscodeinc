//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    int topIndex = 0;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Roll Number: %d\n", students[topIndex].rollNo);
    printf("Name: %s\n", students[topIndex].name);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}