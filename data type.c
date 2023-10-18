//
// Created by Sk Naser Hussain on 18-10-2023.
//
//Write a program in c to take any keyboard input from the user to determine its data type.
#include <stdio.h>
#include <ctype.h>

int main() {
    char a;

    printf("Enter a character: ");
    scanf(" %c", &a); // Added a space before %c to consume any leading whitespaces

    int p = isdigit((unsigned char)a);
    int q = isalpha((unsigned char)a);
    int r = ispunct((unsigned char)a);
    int s = isspace((unsigned char)a);

    if (p != 0) {
        printf("The character %c entered is a digit\n", a);
    } else if (q != 0) {
        printf("The character %c entered is an alphabet\n", a);
    } else if (r != 0) {
        printf("The character %c entered is a punctuation character\n", a);
    } else if (s != 0) {
        printf("The character %c entered is a space\n", a);
    } else {
        printf("WRONG CHOICE!\n");
    }

    return 0;
}
/***
* Enter a character: N
The character N entered is an alphabet
*/