//Created by Sk Naser Hussain on 01-10-2024.
//Write a program in C to add distances given in feet and inches using structure...
#include<stdio.h>

int main() {
    struct {
        int feet;
        int inches;
    } l1, l2, l3;

    
    printf("Enter the first distance in feet:\n");
    scanf("%d", &l1.feet);
    printf("Enter the first distance in inches:\n");
    scanf("%d", &l1.inches);

    
    printf("Enter the second distance in feet:\n");
    scanf("%d", &l2.feet);
    printf("Enter the second distance in inches:\n");
    scanf("%d", &l2.inches);

    
    l3.feet = l1.feet + l2.feet;
    l3.inches = l1.inches + l2.inches;

    
    if (l3.inches >= 12) {
        l3.feet += l3.inches / 12; 
        l3.inches = l3.inches % 12; 
    }

    
    printf("The addition of distances: %d feet %d inches\n", l3.feet, l3.inches);

    return 0;
}


/*
Enter the first distance in feet:
2
Enter the first distance in inches:
3
Enter the second distance in feet:
4
Enter the second distance in inches:
5
The addition of distances: 6 feet 8 inches
*/