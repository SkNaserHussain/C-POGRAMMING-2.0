//
// Created by Sk Naser Hussain on 29-11-2023.
//
//Write a program in c to implement macros and solve an arithmetical operation through it.
#include<stdio.h>
#define d(x) (x*x*x)
#define e(x,y) (x+y-x*x-y+x*x)

int main()
{
    int a = 5;
    printf("\n%d", e(a, a+5));
    printf("\n%d", d(a-1));
    return 0;
}
/***
* 15
-6
*/