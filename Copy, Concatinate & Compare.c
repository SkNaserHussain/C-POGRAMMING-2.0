//Created by Sk Naser Hussain on 02-10-2024

//Write a program in C to copy, concatenate & compare without using <string.h>

#include<stdio.h>

int main(){
    int i, j, l1 = 0, l2 = 0, count = 0;
    char arr[50];
    char brr[50];
    char copy[50];
    char conc[100];  

    
    printf("Enter the first string: ");
    scanf("%s", arr);
    printf("Enter the second string: ");
    scanf("%s", brr);

    
    for (i = 0; arr[i] != '\0'; i++) {
        l1++;
    }

    
    for (i = 0; brr[i] != '\0'; i++) {
        l2++;
    }

    
    for (i = 0; i < l1; i++) {
        copy[i] = arr[i];
    }
    copy[i] = '\0';  
    printf("First string is copied: %s\n", copy);

    
    for (i = 0; i < l1; i++) {
        conc[i] = arr[i];
    }
    for (j = 0; j < l2; j++) {
        conc[i + j] = brr[j];
    }
    conc[i + j] = '\0';  
    printf("First string concatenated with second string: %s\n", conc);

    
    if (l1 == l2) {  
        for (i = 0; i < l1; i++) {
            if (arr[i] == brr[i]) {
                count++;
            }
        }
        if (count == l1) {
            printf("Both strings are equal\n");
        } else {
            printf("Both strings are not equal\n");
        }
    } else {
        printf("Both strings are not equal\n");
    }

    return 0;  
    
}

/*
OUTPUT:-
Enter the first string: Hello!!
Enter the second string: World..
First string is copied: Hello!!
First string concatenated with second string: Hello!!World..
Both strings are not equal
*/
