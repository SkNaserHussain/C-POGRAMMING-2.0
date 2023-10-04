//
// Created by SK NASER HUSSAIN on 03-10-2023.
//
#include <stdio.h>

int main() {
    int age;
    printf("ENTER THE AGE:\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("PERSON IS ELIGIBLE FOR VOTE!!!\n");
    }
    else{
        printf("PERSON IS NOT ELIGIBLE FOR VOTE!!!\n");
    }
    return 0;
}
/***
* ENTER THE AGE:
21
PERSON IS ELIGIBLE FOR VOTE!!!
*/
/***
* ENTER THE AGE:
16
PERSON IS NOT ELIGIBLE FOR VOTE!!!
*/