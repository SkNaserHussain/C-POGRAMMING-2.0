//
// Created by Sk Naser Hussain on 23-11-2023.
//
//Write a program in C to find the greatest number using function'
#include <stdio.h>

int findgreatest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    int greatest = findgreatest(a, b);
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
/***
* Enter two numbers:
88 98
The greatest number is: 98
*/