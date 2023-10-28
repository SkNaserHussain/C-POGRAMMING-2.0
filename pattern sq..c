//
// Created by Sk Naser Hussain on 28-10-2023.
//
//Write a program in c to print the following
//* * * * *
//*       *
//*       *
//*       *
//* * * * *
#include<stdio.h>

int main() {
    int row = 5;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++) {
            if(i == 0 || (i > 0 && i < row-1 && (j == 0 || j == row-1)) || i == row-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
