//
// Created by Sk Naser Hussain on 22-11-2023.
//
//Write a C program to determine whether a given number is an Armstrong number or not
#include<stdio.h>

int main()
{
    int n, r, sum = 0, temp;
    printf("ENTER THE NUMBER:\n");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }
    if (n == sum)
        printf("THE NUMBER IS AN ARMSTRONG NUMBER!!\n ");
    else
        printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER!!\n");
    return 0;
}
/***
 * ENTER THE NUMBER:
 * 153
 * THE NUMBER IS AN ARMSTRONG NUMBER!!
 */
