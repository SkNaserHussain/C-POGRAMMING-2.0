//
// Created by Sk Naser Hussain on 14-10-2023.
//
//Write a program in c to input a number and check whether it positive or negative.
#include<stdio.h>

int main() {
    int a;

    // Input
    printf("Enter the value of A:\n");
    scanf("%d", &a);

    // Check whether A is positive, negative, or zero
    if (a > 0)
        printf("A is positive.\n");
    else if (a < 0)
        printf("A is negative.\n");
    else
        printf("A is zero.\n");

    return 0;
}
/***
* Enter the value of A:
-5
A is negative.
*/