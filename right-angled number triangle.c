//
// Created by Sk Naser Hussain on 23-12-2023.
//
//Write a program in c to print the following pattern
/*        1
        1 2
      1 2 3
    1 2 3 4
  1 2 3 4 5 */
#include <stdio.h>

int main()
{
    int r = 5;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 2 * (r - i); j >= 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

