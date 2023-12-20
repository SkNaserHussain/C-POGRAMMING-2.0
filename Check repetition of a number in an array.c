//
// Created by Sk Naser Hussain on 20-12-2023.
//
//Write a c program to check the repetition of a number in an array.
#include<stdio.h>
int main() {
    int i, n,s,count=0;
    printf("Enter number of elements >> ");
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d >> ", i);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);

    }
    printf("\nEnter element to be searched >> ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(num[i]==s)
            count++;
    }
    printf("The number %d appears %d number of times in the array ",s,count);
}
/***
* Enter number of elements >> 5
Enter element 0 >> 1
Enter element 1 >> 2
Enter element 2 >> 3
Enter element 3 >> 4
Enter element 4 >> 5
1 2 3 4 5
Enter element to be searched >> 3
The number 3 appears 1 number of times in the array
*/