//
// Created by Sk Naser Hussain on 15-10-2023.
//
//Write a program in c to input 5 subject from class 12 and calculate the average of the grades,
#include<stdio.h>

int main() {
    int maths, science, socialStudies, bengali, english, total, avg;

    // Input
    printf("Enter Maths Marks:\n");
    scanf("%d", &maths);

    printf("Enter Science Marks:\n");
    scanf("%d", &science);

    printf("Enter Social Studies Marks:\n");
    scanf("%d", &socialStudies);

    printf("Enter Bengali Marks:\n");
    scanf("%d", &bengali);

    printf("Enter English Marks:\n");
    scanf("%d", &english);

    // Calculate total and average
    total = maths + science + socialStudies + bengali + english;
    avg = total / 5;

    // Output
    printf("Average of all the marks is: %d\n", avg);

    return 0;
}
/***
* Enter Maths Marks:
82
Enter Science Marks:
75
Enter Social Studies Marks:
73
Enter Bengali Marks:
80
Enter English Marks:
85
Average of all the marks is: 79
*/