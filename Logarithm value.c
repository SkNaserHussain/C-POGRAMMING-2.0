//
// Created by Sk Naser Hussain on 13-11-2023.
//
//Write a c program to calculate the logarithm value of a numerical constant by taking the value as an input from the user.
#include<stdio.h>
#include<math.h>
int main(){
    double n,result;
    printf("ENTER THE VALUE OF n:\n");
    scanf("%lf",&n);
    if(n<=0){
        printf("ERROR: LOGARITHM VALUE IS UNDEFINED FOR NON-POSITIVE NUMBER!!\n");
    }else{
        result=log(n);
        printf("THE LOGARITHM OF %0.2lf IS %lf \n",n,result);
    }
}
/***
* ENTER THE VALUE OF n:
5
THE LOGARITHM OF 5.00 IS 1.609438
*/