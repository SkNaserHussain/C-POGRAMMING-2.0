//
// Created by Sk Naser Hussain on 26-11-2023.
//
//Write a program in c to add two 2-D array and display it.
#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int b[100][100];
    int sum[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element b%d%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of two arrays: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
/***
* Enter the number of rows: 3
Enter the number of columns: 2
Enter elements of 1st matrix:
Enter element a00: 1
Enter element a01: 2
Enter element a10: 3
Enter element a11: 4
Enter element a20: 5
Enter element a21: 6
Enter elements of 2nd matrix:
Enter element b00: 7
Enter element b01: 8
Enter element b10: 9
Enter element b11: 10
Enter element b20: 11
Enter element b21: 12
Sum of two arrays:
8   10
12   14
16   18   
*/