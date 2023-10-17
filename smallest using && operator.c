//
// Created by Sk Naser Hussain on 17-10-2023.
//
#include<stdio.h>

int main() {
    int a, b, c, d;

    // Input
    printf("Enter the numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // Find the smallest number
    if (a <= b && a <= c && a <= d) {
        printf("The smallest number is: %d\n", a);
    } else if (b <= a && b <= c && b <= d) {
        printf("The smallest number is: %d\n", b);
    } else if (c <= a && c <= b && c <= d) {
        printf("The smallest number is: %d\n", c);
    } else {
        printf("The smallest number is: %d\n", d);
    }

    return 0;
}
/***
* Enter the numbers:
50 46 67 84
The smallest number is: 46
*/