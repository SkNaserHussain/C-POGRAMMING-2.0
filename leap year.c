//
// Created by SK Naser Hussain on 04-10-2023.
//
// WRITE A PROGRAM IN C TO CHECK WHETHER A YEAR IS LEAP YEAR OR NOT
#include <stdio.h>

int main() {
    int year;
    printf("ENTER THE YEAR:\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("THE YEAR IS A LEAP YEAR!!!\n");
    }
    else{
        printf("THE YEAR IS NOT A LEAP YEAR!!!\n");
    }
    return 0;
}
/***
* ENTER THE YEAR:
2020
THE YEAR IS A LEAP YEAR!!!
*/
/***
* ENTER THE YEAR:
2018
THE YEAR IS NOT A LEAP YEAR!!!
*/