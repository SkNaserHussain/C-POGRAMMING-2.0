//
// Created by Sk Naser Hussain on 27-10-2023.
//
//Write a program in c to print the following
//* * * * *
// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *
//* * * * *
#include<stdio.h>

int main() {
    int row = 5;
    for(int i = 0; i < 2*row; i++) {
        int a;
        if(i < row) {
            a = 2*i + 1;
        } else {
            a = 2*(2*row - i) - 3;
        }
        for(int j = 0; j < a; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2*row - a; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
