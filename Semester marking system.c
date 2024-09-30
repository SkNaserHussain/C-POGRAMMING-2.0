//
// Created by Sk Naser Hussain on 16-10-2023.
//
//Write a program in C to implement Adamas University semester marking system...

#include <stdio.h>


float grade_to_point(char grade) {
    switch (grade) {
        case 'A':
            return 10.0;
        case 'B':
            return 8.0;
        case 'C':
            return 6.0;
        case 'D':
            return 4.0;
        case 'F':
            return 0.0;
        default:
            return -1.0;  
    }
}

int main() {
    const int n = 6;  
    float credits[] = {4.0, 4.0, 4.0, 4.0, 4.0, 2.0};  

    
    const char* subjects[] = {
        "Discrete Structure & Logic",
        "Data Structure & Algorithm",
        "Switching Circuits & Logic Designing",
        "Engineering Mathematics-III",
        "LAB-1",
        "LAB-2"
    };
    
    char grades[n];  
    float total_credits = 0.0, sum = 0.0;

    
    for (int i = 0; i < n; i++) {
        printf("%s: ", subjects[i]);
        scanf(" %c", &grades[i]);  
        
        
        float grade_point = grade_to_point(grades[i]);

        
        if (grade_point == -1.0) {
            printf("Invalid grade entered!\n");
            return -1;  
        }

        
        total_credits += credits[i];
        sum += grade_point * credits[i];
    }

    
    float gpa = sum / total_credits;
    printf("GPA: %.2f\n", gpa);

    return 0;
}


/*
Discrete Structure & Logic: A
Data Structure & Algorithm: B
Switching Circuits & Logic Designing: C
Engineering Mathematics-III: A
LAB-1: B
LAB-2: D
GPA: 8.00
*/
