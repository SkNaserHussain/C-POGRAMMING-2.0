//
// Created by Sk Naser Hussain on 18-10-2023.
//
//Write a program in c to check whether a number is prime or composite.
#include<stdio.h>

int main() {
    int n, m, a = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n / 2;

    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number\n", n);
            a = 1;
            break;
        }
    }

    if (a == 0 && n > 1) {
        printf("%d is a prime number\n", n);
    } else if (n <= 1) {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
/***
* Enter a number: 2
2 is a prime number
*/