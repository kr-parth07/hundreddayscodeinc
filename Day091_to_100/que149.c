//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->empId);

    printf("Enter Name: ");
    scanf("%s", emp->name);

    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp->empId);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);

    free(emp);

    return 0;
}