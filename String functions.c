//
// Created by Sk Naser Hussain on 23-11-2023.
//
//Write a program in c to concatenate four stings together using string function.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50], str4[50];

    printf("Enter the strings:\n");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    fgets(str3, sizeof(str3), stdin);
    fgets(str4, sizeof(str4), stdin);

    // Remove newline characters from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    str3[strcspn(str3, "\n")] = '\0';
    str4[strcspn(str4, "\n")] = '\0';

    strcat(str1, str2);
    strcat(str3, str4);
    strcat(str1, str3);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
/***
* Enter the strings:
Hello World
I am an Indian
I love my India
I am proud to be an Indian
Concatenated string: Hello WorldI am an IndianI love my IndiaI am proud to be an Indian
*/