//
// Created by Sk Naser Hussain on 10-12-2023.
//
//Write a program to add two floating point numbers. The result should contain only two digit after the decimal.
#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two floating-point numbers
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    // Calculate the sum
    result = num1 + num2;

    // Display the result with two digits after the decimal point
    printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, result);

    return 0;
}
/***
* Enter the first floating-point number: 2.03
Enter the second floating-point number: 4.05
Sum of 2.03 and 4.05 is 6.08
*/