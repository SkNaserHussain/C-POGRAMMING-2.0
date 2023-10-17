//
// Created by Sk Naser Hussain on 17-10-2023.
//
#include<stdio.h>
#include<ctype.h>

int main() {
    char a;

    // Input
    printf("Enter character: ");
    scanf(" %c", &a);

    // Convert to lowercase
    a = tolower(a);

    switch(a) {
        case 'a':
            printf("It is A\n");
            break;
        case 'e':
            printf("It is E\n");
            break;
        case 'i':
            printf("It is I\n");
            break;
        case 'o':
            printf("It is O\n");
            break;
        case 'u':
            printf("It is U\n");
            break;
        default:
            printf("It is a Consonant\n");
    }

    return 0;
}
/***
* Enter character: N
It is a Consonant
*/