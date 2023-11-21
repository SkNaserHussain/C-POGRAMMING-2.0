//
// Created by Sk Naser Hussain on 21-11-2023.
//
//Write a C program that takes a user-inputted character and prints its corresponding ASCII value.
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value is: %d", c);
    return 0;
}
/***
* Enter a character: a
ASCII value is: 97
*/