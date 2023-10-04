//
// Created by Sk Naser Hussain on 04-10-2023.
//
// WRITE A PROGRAM IN C TO CHECK A NUMBER IS EVEN OR ODD
#include <stdio.h>

int main() {
    int number;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("THE NUMBER IS EVEN!!!\n");
    }
    else{
        printf("THE NUMBER IS ODD!!!\n");
    }
    return 0;
}
/***
 * ENTER THE NUMBER:
6
THE NUMBER IS EVEN!!!
 */
/***
* ENTER THE NUMBER:
9
THE NUMBER IS ODD!!!
*/