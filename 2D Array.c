//
// Created by Sk Naser Hussain on 11-11-2023.
//
//Write a C program that allows the user to input the dimensions of a 2D array (number of rows and columns), then prompts the user to enter each element in the array. Finally, the program prints the entered elements in a matrix format.
#include<stdio.h>

int main(){
    int rows=0, columns=0;

    printf("ENTER THE NUMBER OF ROWS:\n");
    scanf("%d",&rows);
    printf("ENTER THE NUMBER OF COLUMNS:\n");
    scanf("%d",&columns);

    int arr[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("ENTER THE ELEMENT IN ROW:%d COLUMN:%d", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/***
* ENTER THE NUMBER OF ROWS:
4
ENTER THE NUMBER OF COLUMNS:
3
ENTER THE ELEMENT IN ROW:0 COLUMN:0
10
ENTER THE ELEMENT IN ROW:0 COLUMN:1
20
ENTER THE ELEMENT IN ROW:0 COLUMN:2
30
ENTER THE ELEMENT IN ROW:1 COLUMN:0
40
ENTER THE ELEMENT IN ROW:1 COLUMN:1
50
ENTER THE ELEMENT IN ROW:1 COLUMN:2
60
ENTER THE ELEMENT IN ROW:2 COLUMN:0
70
ENTER THE ELEMENT IN ROW:2 COLUMN:1
80
ENTER THE ELEMENT IN ROW:2 COLUMN:2
90
ENTER THE ELEMENT IN ROW:3 COLUMN:0
100
ENTER THE ELEMENT IN ROW:3 COLUMN:1
110
ENTER THE ELEMENT IN ROW:3 COLUMN:2
120
10 20 30
40 50 60
70 80 90
100 110 120 
*/