//
// Created by Sk Naser Hussain on 14-10-2023.
//
//Write a program in c to input 2 number and find the larger among the two.
#include<stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter the value of A and B:\n");
    scanf("%d%d", &a, &b);

    // Compare and output
    if (a > b)
        printf("A is greater.\n");
    else if (b > a)
        printf("B is greater.\n");
    else
        printf("A and B are equal.\n");

    return 0;
}
/***
* Enter the value of A and B:
10 20
B is greater.
*/