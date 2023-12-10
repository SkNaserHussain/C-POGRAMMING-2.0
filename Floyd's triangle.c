//
// Created by Sk Naser Hussain on 10-12-2023.
//
//Write a program to print the Floyd’s triangle.
#include <stdio.h>

int main() {
    int rows, number = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }

    return 0;
}
/***
* Enter the number of rows for Floyd's Triangle: 5
Floyd's Triangle:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/