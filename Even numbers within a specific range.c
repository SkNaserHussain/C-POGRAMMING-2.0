//
// Created by Sk Naser Hussain on 22-11-2023.
//
//Write a program in C to find the even numbers within a specific range.
#include<stdio.h>
int main(){
    int a, b, start;
    printf("Enter the starting point:");
    scanf("%d", &a);
    printf("Enter the ending point:");
    scanf("%d", &b);
    while (a < b) {
        if (a % 2 == 0) {
            printf("%d is an even number\n", a);
        }
        a++;
    }
    return 0;
}
/***
* Enter the starting point:20
Enter the ending point:40
20 is an even number
22 is an even number
24 is an even number
26 is an even number
28 is an even number
30 is an even number
32 is an even number
34 is an even number
36 is an even number
38 is an even number
*/