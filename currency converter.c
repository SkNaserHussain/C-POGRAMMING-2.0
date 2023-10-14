//
// Created by Sk Naser Hussain on 14-10-2023.
//
////Write a program in c to make your own currency converter.
#include<stdio.h>

int main() {
    float ruppees;

    // Input
    printf("Enter the amount in Rupees:\n");
    scanf("%f", &ruppees);

    // Output
    printf("Amount in Dollars: %f\n", ruppees * 0.012);
    printf("Amount in Euros: %f\n", ruppees * 0.011);
    printf("Amount in Yen: %f\n", ruppees * 1.77); // Corrected currency name
    printf("Amount in Rubles: %f\n", ruppees * 1.16);

    return 0;
}
/***
* Enter the amount in Rupees:
50
Amount in Dollars: 0.600000
Amount in Euros: 0.550000
Amount in Yen: 88.500000
Amount in Rubles: 58.000000
*/