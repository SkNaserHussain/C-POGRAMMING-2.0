//
// Created by Sk Naser Hussain on 14-10-2023.
//
//Write a program in c to calculate the area of triangle using Haron's formula.
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, s, area;

    // Input
    printf("Enter the values of A, B, and C:\n");
    scanf("%f%f%f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output
    printf("Area of triangle is: %f\n", area);

    return 0;
}
/***
* Enter the values of A, B, and C:
2 3 4
Area of triangle is: 2.904737
*/