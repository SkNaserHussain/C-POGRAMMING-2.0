//
// Created by Sk naser Hussain on 30-10-2023.
//
//Write a program in c to print diamond shaped pattern
#include <stdio.h>

int main() {
    int i, j, r;
    printf("Input number of rows:");
    scanf("%d", &r);

    // Upper part of the diamond
    for (i = 0; i < r; i++) {
        for (j = 1; j <= r - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower part of the diamond
    for (i = r - 1; i >= 1; i--) {
        for (j = 1; j <= r - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
/***
* Input number of rows:6
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
*/