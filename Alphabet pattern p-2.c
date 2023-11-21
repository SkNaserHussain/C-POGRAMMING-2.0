//
// Created by sk Naser Hussain on 21-11-2023.
//
/***Write a C program that takes an input 'n' (number of rows) and prints a pattern as follows:
 *  A
   AB
  ABC
 ABCD
ABCDE
 */
#include<stdio.h>

int main() {
    int i = 1, j, sp, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("\n");
        sp = 1;
        while (sp <= (n - i)) {
            printf(" ");
            sp++;
        }
        j = 1;
        char ch = 'A';
        while (j <= i) {
            printf("%c", ch);
            j++;
            ch++;
        }
        i++;
    }
    return 0;
}

