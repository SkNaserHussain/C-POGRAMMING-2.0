//
// Created by Sk Naser Hussain on 09-12-2023.
//
//Write a program in C to find the factors of a number.
#include<stdio.h>
int main(){
    int a,i;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&a);
    printf("THE FACTOR OF THE GIVEN NUMBER IS:\n");
    for(i=1;i<=a;++i)
        if(a%i==0){
            printf("%d\n",i);
        }
}
/***
* ENTER THE NUMBER:
5
THE FACTOR OF THE GIVEN NUMBER IS:
1
5
*/