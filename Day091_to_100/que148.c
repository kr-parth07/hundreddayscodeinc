// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.rollNo == s2.rollNo &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {
        return 1; 
    }
    return 0;
}

int main() {
    struct Student st1, st2;

    printf("Enter details of Student 1:\n");
    printf("Roll Number: ");
    scanf("%d", &st1.rollNo);
    printf("Name: ");
    scanf("%s", st1.name);
    printf("Marks: ");
    scanf("%f", &st1.marks);

    printf("\nEnter details of Student 2:\n");
    printf("Roll Number: ");
    scanf("%d", &st2.rollNo);
    printf("Name: ");
    scanf("%s", st2.name);
    printf("Marks: ");
    scanf("%f", &st2.marks);

    if (areIdentical(st1, st2)) {
        printf("\nThe two students are IDENTICAL.\n");
    } else {
        printf("\nThe two students are DIFFERENT.\n");
    }

    return 0;
}