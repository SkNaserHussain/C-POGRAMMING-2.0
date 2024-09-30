//Created by Sk Naser Hussain on 30-09-2024

//Write a program in C to implement Fibonacci series using recursion

#include<stdio.h> 
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms:\n",n);
        for(int i=0;i<n;i++){
            printf("%d ",Fibonacci(i));
        }
    printf("\n");
    return 0;
}


/*
Enter the number of terms in the series: 10
Fibonacci series up to 10 terms:
0 1 1 2 3 5 8 13 21 34
*/