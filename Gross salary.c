//
// Created by Sk Naser Hussain on 23-11-2023.
//
//Write a program in C to  calculate various components of the gross salary, such as DA (Dearness Allowance), HRA (House Rent Allowance), and medical allowance.
#include<stdio.h>

int main() {
    float basic, gross, da, hra, med;
    med = 300;

    printf("Enter your basic salary:\n");
    scanf("%f", &basic);

    // Calculate DA based on the given conditions
    if (basic > 21600) {
        da = (basic * 15) / 100;
        printf("The DA will be %f\n", da);
    } else {
        da = (basic * 10) / 100;
        printf("The DA will be %f\n", da);
    }

    hra = basic * 0.1;
    printf("HRA will be %f\n", hra);

    printf("Medical will be 300\n");

    // Calculate gross salary
    gross = basic + med + da + hra;
    printf("Gross salary will be %f + %f + %f + %f = %f\n", basic, med, da, hra, gross);

    return 0;
}
/***
* Enter your basic salary:
30000
The DA will be 4500.000000
HRA will be 3000.000000
Medical will be 300
Gross salary will be 30000.000000 + 300.000000 + 4500.000000 + 3000.000000 = 37800.000000
*/
