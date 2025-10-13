//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int diag[rows], count = 0;

    for (int i = 0; i < rows; i++) {
        diag[count++] = matrix[i][i];
    }

    int isDistinct = 1;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}