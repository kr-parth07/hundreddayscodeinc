// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

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

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}