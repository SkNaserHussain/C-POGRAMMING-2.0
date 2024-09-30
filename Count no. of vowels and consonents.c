//Created by Sk Naser Hussain on 30-09-2024

//Write a program in C to count no. of vowels and consonents using switch case

#include <stdio.h>
#include <ctype.h>  

int main() {
    char string[40];
    int i, count_vowel = 0, count_consonant = 0;

    
    printf("Enter a string: \n");
    fgets(string, sizeof(string), stdin);

    
    for (i = 0; string[i] != '\0'; i++) {
        
        char ch = tolower(string[i]);

        if (isalpha(ch)) {  
            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count_vowel++;
                    break;
                default:
                    count_consonant++;
                    break;
            }
        }
    }

    
    printf("No. of vowels: %d\n", count_vowel);
    printf("No. of consonants: %d\n", count_consonant);

    return 0;
}


/*
Enter a string: 
MAN
No. of vowels: 1
No. of consonants: 2
*/