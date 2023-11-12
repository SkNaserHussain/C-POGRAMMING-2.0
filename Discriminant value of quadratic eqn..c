//
// Created by Sk Naser Hussain on 12-11-2023.
//
////Write a program to get the discriminant value of a quadratic equation.
#include<stdio.h>
int main(){
    int a,b,c,D;
    printf("ENTER THE VALUE OF a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    printf("THE VALUE OF DISCRIMINANT IS: %d\n",D);
}
/***
* ENTER THE VALUE OF a,b,c:
6 9 3
THE VALUE OF DISCRIMINANT IS: 9
*/