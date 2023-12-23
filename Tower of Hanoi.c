//
// Created by Sk Naser Hussain on 23-12-2023.
//
//Write a C program to solve the Tower of Hanoi problem using recursion.
#include<stdio.h>

void move(int, char, char, char);

int main()
{
    int n;
    printf("\n Enter the number of rings:");
    scanf("%d", &n);
    move(n, 'A', 'C', 'B');
    return 0;
}

void move(int n, char source, char dest, char spare)
{
    if (n == 1)
        printf("\n Move from %c to %c", source, dest);
    else
    {
        move(n - 1, source, spare, dest);
        move(1, source, dest, spare);
        move(n - 1, spare, dest, source);
    }
}
/*
 * Enter the number of rings:4
Move from A to B
 Move from A to C
 Move from B to C
 Move from A to B
 Move from C to A
 Move from C to B
 Move from A to B
 Move from A to C
 Move from B to C
 Move from B to A
 Move from C to A
 Move from B to C
 Move from A to B
 Move from A to C
 Move from B to C
 */
