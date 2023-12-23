//
// Created by Sk Naser Hussain on 23-12-2023.
//
////Write a program in c to implement call by value in function.
#include<stdio.h>

void imp(int a)
{
    printf("%d", a);
}

int main()
{
    int a = 3;
    printf("%d\n", a);
    printf("Enter Number: ");
    scanf("%d", &a);
    imp(a);
    return 0;
}
/***
* 3
Enter Number: 1
1
*/
