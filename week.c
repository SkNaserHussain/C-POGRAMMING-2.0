//
// Created by Sk Naser Hussain on 18-10-2023.
//
//Write a c program to display the day of week by taking the week number from the user.
#include<stdio.h>

int main() {
    int ch;

    printf("Enter the day number: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("It is Monday\n");
            break;
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It is Wednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It is Friday\n");
            break;
        case 6:
            printf("It is Saturday\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;
        default:
            printf("WRONG CHOICE!\n");
    }

    return 0;
}
/***
* Enter the day number: 5
It is Friday
*/