//
// Created by Sk Naser Hussain on 30-11-2023.
//
///Write a program in C to check whether a string ha odd or even number of characters without using string function.
#include<stdio.h>
int main(){
    char str[100];
    int count;
    printf("ENTER THE STRING:\n");
    scanf("%s",&str);
    while(str[count]!='\0'){
        count++;
    }
    if(count%2==0){
        printf("THE STRING HAS EVEN NUMBER OF CHARACTERS!!\n");
    }else{
        printf("THE STRING HAS ODD NUMBER OF CHARACTERS!!\n");
    }
}