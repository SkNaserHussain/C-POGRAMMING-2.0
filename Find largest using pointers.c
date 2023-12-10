//
// Created by Sk Naser Hussain on 10-12-2023.
//
//
#include<stdio.h>
int main(){
    int a,b,c,*d,*e,*f;
    printf("ENTER THREE NUMBERS:\n");
    scanf("%d%d%d",&a,&b,&c);
    d= &a;
    e= &b;
    f= &c;
    if(*d>*e && *d>*f){
        printf("THE LARGEST IS :%d",*d);
    }else if(*e>*d && *e>*f) {
        printf("THE LARGEST IS :%d", *e);
    }else {
        printf("THE LARGEST IS :%d", *f);
    }
    return 0;
}
/***
*
ENTER THREE NUMBERS:
20 -96 41
THE LARGEST IS :41
*/