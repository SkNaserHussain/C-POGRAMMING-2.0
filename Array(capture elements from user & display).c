//
// Created by Sk Naser Hussain on 02-11-2023.
//
//write a program in C to capture the elements from the user & display
#include<stdio.h>
int main(){
    int size;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    int numbers[size];
    for(int i=0;i<size;i++){
        printf("ENTER THE ELEMENT IN INDEX:%d\n",i);
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",numbers[i]);
    }
}
/***
* ENTER THE SIZE OF ARRAY
5
ENTER THE ELEMENT IN INDEX:0
10
ENTER THE ELEMENT IN INDEX:1
20
ENTER THE ELEMENT IN INDEX:2
30
ENTER THE ELEMENT IN INDEX:3
40
ENTER THE ELEMENT IN INDEX:4
50
1020304050
*/