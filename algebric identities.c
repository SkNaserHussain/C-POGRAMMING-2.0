//
// Created by Sk Naser Hussain on 15-10-2023.
//
//Write a program in c to solve all the algebraic identities.
#include<stdio.h>

int main() {
    float a, b, c;

    // Input
    printf("Enter the values of A, B, and C:\n");
    scanf("%f%f%f", &a, &b, &c);

    // Calculate algebraic identities
    float s1 = (a*a) + (2*a*b) + (b*b);
    float s2 = (a*a) - (2*a*b) + (b*b);
    float s3 = (a+b) * (a-b);
    float s4 = (a*a) + (b*b) + (c*c) + (2*a*b) + (2*b*c) + (2*c*a);
    float s5 = (a*a) + (b*b) + (c*c) + (2*a*b) - (2*b*c) - (2*c*a);
    float s6 = (a*a) + (b*b) + (c*c) - (2*a*b) - (2*b*c) + (2*c*a);
    float s7 = (a*a) + (b*b) + (c*c) - (2*a*b) + (2*b*c) - (2*c*a);
    float s8 = (a*a) + (b*b) + (c*c) - (2*a*b) + (2*b*c) - (2*c*a);
    float s9 = (a*a*a) + (b*b*b) + ((3*a*b) + (a+b));
    float s10 = (a*a*a) - (b*b*b) - ((3*a*b) + (a-b));
    float s11 = (a+b) * ((a*a) - (a*b) + (b*b));
    float s12 = (a-b) * ((a*a) + (a*b) + (b*b));
    float s13 = (a*a*a) + (b*b*b) + (c*c*c) - (3*a*b*c);

    // Output
    printf("S_1=%f\n", s1);
    printf("S_2=%f\n", s2);
    printf("S_3=%f\n", s3);
    printf("S_4=%f\n", s4);
    printf("S_5=%f\n", s5);
    printf("S_6=%f\n", s6);
    printf("S_7=%f\n", s7);
    printf("S_8=%f\n", s8);
    printf("S_9=%f\n", s9);
    printf("S_10=%f\n", s10);
    printf("S_11=%f\n", s11);
    printf("S_12=%f\n", s12);
    printf("S_13=%f\n", s13);

    return 0;
}
/***
* Enter the values of A, B, and C:
1 2 3
S_1=9.000000
S_2=1.000000
S_3=-3.000000
S_4=36.000000
S_5=0.000000
S_6=4.000000
S_7=16.000000
S_8=16.000000
S_9=18.000000
S_10=-12.000000
S_11=9.000000
S_12=-7.000000
S_13=18.000000
*/