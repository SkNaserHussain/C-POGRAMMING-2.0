//
// Created by sknas on 23-11-2023.
//
//Write a program in c to manually calculate the length of a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: \n");
    // Use fgets to handle spaces in the input
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of input string: %d", length);

    return 0;
}
/***
* Enter a string:
I am proud to be an Indian!!
Length of input string: 29
*/