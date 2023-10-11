//
// Created by SK NASER HUSSAIN on 11-10-2023.
//
//Write a program in c to check whether a year is leap year or not using functions.
#include<stdio.h>
int leap(int year)
{
    if((year%4==0)&&((year%400==0)||(year%100!=0)))
        printf("The year is a leap year");
    else
        printf("The year is not a leap year");
}
int main()
{
    int year=0;
    printf("Enter the Year:");
    scanf("%d",&year);
    leap(year);
}
/***
* Enter the Year:2003
The year is not a leap year
*/