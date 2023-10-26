//
// Created by Sk Naser Hussain on 26-10-2023.
//
//Write a program in c to print the palindrome pyramid
#include <stdio.h>

int main() {
    int i, j, a = 0;

    for (i = 1; i <= 4; i++) {
        for (j = i; j < 4; j++) {
            printf("  ");  // Two spaces for separation
        }
        for (j = 1; j <= i; j++) {
            ++a;
            printf("%d ", a);
        }
        a--;
        for (j = 1; j < i; j++) {
            printf("%d ", a);
            a--;
        }
        printf("\n");
        a++;
    }

    return 0;
}
/***
*     1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4 
*/