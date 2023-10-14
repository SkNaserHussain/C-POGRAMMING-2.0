//
// Created by SK Naser Hussain on 14-10-2023.
//
#include <stdio.h>
int pattern(int n){
    int i,j ;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("ENTER THE VALUE OF n:");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
/***
*ENTER THE VALUE OF n:5
*    *
*    **
*    ***
*    ****
*    *****
*/