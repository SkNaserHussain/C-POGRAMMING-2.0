//
// Created by Sk Naser Hussain on 17-10-2023.
//
//Write a program in c by taking four numbers and find the largest number using and operator.
#include<stdio.h>

int main() {
    int a, b, c, d;

    // Input
    printf("Enter the numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // Find the largest number
    if (a >= b && a >= c && a >= d) {
        printf("The largest number is: %d\n", a);
    } else if (b >= a && b >= c && b >= d) {
        printf("The largest number is: %d\n", b);
    } else if (c >= a && c >= b && c >= d) {
        printf("The largest number is: %d\n", c);
    } else {
        printf("The largest number is: %d\n", d);
    }

    return 0;
}
/***
* Enter the numbers:
55 96 68 76
The largest number is: 96
*/