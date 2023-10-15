//
// Created by Sk Naser Hussain on 15-10-2023.
//
#include<stdio.h>

int main() {
    int marks;

    // Input
    printf("Enter Marks:\n");
    scanf("%d", &marks);

    // Check validity of marks
    if (marks > 100 || marks < 0) {
        printf("WRONG ENTRY. TRY AGAIN\n");
    } else if (marks <= 100 && marks >= 95) {
        printf("Grade is: AA\n");
    } else if (marks < 95 && marks >= 85) {
        printf("Grade is: A+\n");
    } else if (marks < 85 && marks >= 70) {
        printf("Grade is: A\n");
    } else if (marks < 70 && marks >= 60) {
        printf("Grade is: B\n");
    } else if (marks < 60 && marks >= 45) {
        printf("Grade is: C\n");
    } else {
        printf("Grade is: D\n");
    }

    return 0;
}
/***
* Enter Marks:
56
Grade is: C
*/