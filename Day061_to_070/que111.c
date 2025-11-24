//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    int result[n - k + 1];   
    int negIndex[n];        
    int front = 0, rear = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }
    }

    for (int i = k; i < n; i++) {
        
        if (front < rear) {
            result[i - k] = arr[negIndex[front]];
        } else {
            result[i - k] = 0;
        }

        while (front < rear && negIndex[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }
    }

    if (front < rear) {
        result[n - k] = arr[negIndex[front]];
    } else {
        result[n - k] = 0;
    }

    for (int i = 0; i < n - k + 1; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    firstNegativeInWindow(arr, n, k);

    return 0;
}