//
// Created by Sk Naser Hussain on 09-11-2023.
//
////Write a c program to convert a decimal number to binary number.
#include <stdio.h>

int main()
{
    int decimalNumber, remainder;
    long binaryNumber = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0)
    {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * i;
        decimalNumber /= 2;
        i *= 10;
    }

    printf("Binary number: %ld\n", binaryNumber);

    return 0;
}
/***
* Enter a decimal number: 8
Binary number: 1000
*/