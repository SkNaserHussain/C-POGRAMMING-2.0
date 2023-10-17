//
// Created by Sk Naser Hussain on 17-10-2023.
//
//Write a program in c to take the values of 2 sides.If both the sides are same,calculate the area of square else calculate the area of rectangle.
#include<stdio.h>

int main() {
    int a, b, area;

    // Input
    printf("Enter the values of Both the sides:\n");
    scanf("%d%d", &a, &b);

    if (a == b) {
        // Area of Square
        area = a * a;
        printf("Area of Square is: %d\n", area);
    } else {
        // Area of Rectangle
        area = a * b;
        printf("Area of Rectangle is: %d\n", area);
    }

    return 0;
}
/***
* Enter the values of Both the sides:
4 5
Area of Rectangle is: 20
*/