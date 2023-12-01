//
// Created by Sk Naser Hussain on 01-12-2023.
//
//Write a c program to access elements of an array using pointers.
#include <stdio.h>
int main()
{
    int arry[5];
    int i;
    printf("Enter 5 elements for the array: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", arry + i);
    int *ptr = arry;
    printf("You have entered \n");
    for(i = 0; i < 5; i++)
        printf("array[%d] = %d\n",i,*(ptr+i));
}
/***
* Enter 5 elements for the array: 10 20 30 40 50
You have entered
array[0] = 10
array[1] = 20
array[2] = 30
array[3] = 40
array[4] = 50
*/