//
// Created by Sk Naser Hussain on 27-11-2023.
//
////Write a c program to implement all string functions.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50], str4[50];
    printf("Enter string 1 : \n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2 : \n");
    fgets(str2, sizeof(str2), stdin);

    printf("Full Length of string 1  >> %zu\n", strlen(str1));
    printf("Length of string 2 upto 7 >> %zu\n", strnlen(str2, 7));

    strcpy(str3, str1);
    strcat(str1, str2);
    printf("Full concatenation of string 1 and 2 >> %s \n", str1);

    strcpy(str1, str3);
    strncat(str1, str2, 5);
    printf("Concatenation of string 1 and 2 up to 5 characters >> %s \n", str1);

    printf("Comparing string 1 with 2 >> %d \n", strcmp(str1, str2));
    printf("Comparing first 3 characters of string 1 and 2 >> %d \n", strncmp(str1, str2, 3));

    strcpy(str4, str1);
    printf("Copying the string one to another variable >> %s\n", str4);

    strncpy(str4, str2, 4);
    printf("Copying the first 4 characters of string one to another variable >> %s\n", str4);

    char ch;
    printf("Enter a character:");
    scanf(" %c", &ch);

    printf("The character %c first occurs in index: %ld in string 1\n", ch, strchr(str1, ch) - str1);
    printf("The character %c last occurs in index: %ld in string 1\n", ch, strrchr(str1, ch) - str1);

    printf("Enter a substring:");
    fgets(str4, sizeof(str4), stdin);

    if (strstr(str2, str4) != NULL) {
        printf("Substring found in string 2\n");
    } else {
        printf("Substring not found in string 2\n");
    }

    printf("Comparing string 1 with 2 ignoring case >> %d\n", strcasecmp(str1, str2));
    printf("Comparing string 1 with 2 up to 5 characters ignoring case >> %d\n", strncasecmp(str1, str2, 5));

    return 0;
}
