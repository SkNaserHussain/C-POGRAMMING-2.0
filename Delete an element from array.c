//
// Created by Sk Naser Hussain on 10-12-2023.
//
//Write a program in C to delete an element from an array.
#include <stdio.h>
int main()
{
    int array[100], position, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= n+1)
        printf("Deletion not possible.\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c+1];

        printf("Resultant array:\n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", array[c]);
    }

    return 0;
}
/***
* Enter number of elements in array
5
Enter 5 elements
10 20 30 40 50
Enter the location where you wish to delete element
1
Resultant array:
20
30
40
50
*/