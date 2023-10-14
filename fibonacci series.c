//
// Created by Sk Naser Hussain on 14-10-2023.
//
// print fibonacci series (without returning value)
#include <stdio.h>
int fibonacci(int num){
    static int a=0,b=1,c;
    if(num>0){
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
        fibonacci(num-1);
    }
}
int main() {
    int num;
    printf("ENTER THE ELEMENT:");
    scanf("%d",&num);
    printf("FIBONACCI SERIES:");
    fibonacci(num-2);
    return 0;
}