//
// Created by Sk Naser Hussain on 27-11-2023.
//
//Write a c program to multiply two 2-D array.
#include <stdio.h>

int main() {
    int r, c;
    int matrix1[100][100];
    int matrix2[100][100];
    int result[100][100];
    int i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter the element in row-%d and column-%d :", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter the element in row-%d and column-%d :", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            result[i][j] = 0;
            for (k = 0; k < c; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/***
* Enter the number of rows: 3
Enter the number of columns: 2
Enter elements of the first matrix:
Enter the element in row-0 and column-0 :1
Enter the element in row-0 and column-1 :2
Enter the element in row-1 and column-0 :3
Enter the element in row-1 and column-1 :4
Enter the element in row-2 and column-0 :5
6Enter the element in row-2 and column-1 :6
Enter elements of the second matrix:
Enter the element in row-0 and column-0 :7
Enter the element in row-0 and column-1 :8
Enter the element in row-1 and column-0 :9
Enter the element in row-1 and column-1 :10
Enter the element in row-2 and column-0 :11
Enter the element in row-2 and column-1 :12
Result of matrix multiplication:
25 28
57 64
89 100
*/