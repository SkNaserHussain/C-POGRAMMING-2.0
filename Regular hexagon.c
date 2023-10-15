//
// Created by Sk Naser Hussain on 15-10-2023.
//
//Write a program in c to calculate the area of regular hexagon.
#include<stdio.h>

int main() {
    float side, area;

    // Input
    printf("Enter the value of side:\n");
    scanf("%f", &side);

    // Calculate area
    float constant = (3 * 1.732) / 2;
    area = constant * (side * side);

    // Output
    printf("Area of hexagon is: %f\n", area);

    return 0;
}
/***
* Enter the value of side:
6
Area of hexagon is: 93.528000
*/