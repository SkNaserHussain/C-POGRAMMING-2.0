//
// Created by Sk Naser Hussain on 14-10-2023.
//
#include<stdio.h>
#include<math.h>

int main() {
    float p, r, t, SI, CI;

    // Input
    printf("Enter the value of P, R, and T:\n");
    scanf("%f%f%f", &p, &r, &t);

    // Calculate Simple Interest
    SI = (p * r * t) / 100;

    // Calculate Compound Interest
    CI = p * pow(1 + r / 100, t) - p;

    // Output
    printf("The required Simple Interest and Compound Interest are: %f\t%f\n", SI, CI);

    return 0;
}
/***
* Enter the value of P, R, and T:
10 15 20
The required Simple Interest and Compound Interest are: 30.000000	153.665298
*/