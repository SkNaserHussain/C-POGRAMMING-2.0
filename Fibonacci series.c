//
// Created by Sk Naser Hussain on 11-12-2023.
//
//Print fibonacci series.
#include<stdio.h>
int main(){
    int i,n;
    int t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("ENTER THE NUMBER OF TERMS:");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:%d,%d",t1,t2);
    for(i=3;i<=n;++i){
        printf("%d",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}
/***
* Enter the number of terms: 10
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
*/