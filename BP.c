//
// Created by Sk Naser Hussain on 17-10-2023.
//
//Write a program in c to check whether the temperature of water can reach boiling point.
#include<stdio.h>

int main() {
    float temp;

    // Input
    printf("Enter the temperature of water:\n");
    scanf("%f", &temp);

    // Check if the water has reached boiling point
    if (temp >= 100) {
        printf("The water has reached or exceeded boiling point.\n");
    } else {
        printf("The water has not reached boiling point.\n");
    }

    return 0;
}
/***
* Enter the temperature of water:
68
The water has not reached boiling point.
*/