//
// Created by Sk Naser Hussain on 17-10-2023.
//
//Write a program in c to print the sum of numbers.
#include<stdio.h>

int main() {
    int n, sum;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum
    sum = n * (n + 1) / 2;

    // Output
    printf("The required sum is: %d\n", sum);

    return 0;
}
/***
* Enter the value of n: 20
The required sum is: 210
*/