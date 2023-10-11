//
// Created by Sk Naser Hussain on 11-10-2023.
//
//Write a program in c to swap two numbers using functions.
#include<stdio.h>
int swap(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    printf("The new value of A:%d\n",a);
    printf("The new value of B:%d\n",b);
}
int main()
{
    int a=0,b=0;
    printf("Enter the value of A and B:");
    scanf("%d %d",&a,&b);
    swap(a,b);
}