//
// Created by Sk Naser Hussain on 26-10-2023.
//
//Write a program in c to find the factorial of n.
#include<stdio.h>

int main() {
    int a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int originalN = n; // Save the original value of n for printing later

    while (n > 0) {
        a *= n;
        n--;
    }

    printf("The factorial of the number %d is: %d\n", originalN, a);

    return 0;
}
/***
* Enter a number: 6
The factorial of the number 6 is: 720
*/