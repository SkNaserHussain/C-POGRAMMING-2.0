//
// Created by Sk Naser Hussain on 25-11-2023.
//
//Write a program in C that takes a user-input string and then prints the reversed version of the string on a new line.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");  // Add this line
}
/***
* Enter a string: I am an Indian!!
Reversed string: !!naidnI na ma I
*/