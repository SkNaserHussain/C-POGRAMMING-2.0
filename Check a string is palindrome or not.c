//Created by Sk Naser Hussain on 30/09/2024

//Write a program in C to check whether a string is palindrome or not without using any library function....
#include<stdio.h>

int main() {
    char string[40];
    int length = 0, flag = 1;

    
    printf("Enter string: ");
    fgets(string, sizeof(string), stdin);

    
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == '\n') {  
            string[i] = '\0';
            break;
        }
        length++;
    }

    
    for(int i = 0; i < length / 2; i++) {
        if(string[i] != string[length - 1 - i]) {
            flag = 0;  
            break;
        }
    }

    
    if(flag == 1) {
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }

    return 0;
}


/*
OUTPUT:-
Enter string: MALAYALAM
String is palindrome
 */
