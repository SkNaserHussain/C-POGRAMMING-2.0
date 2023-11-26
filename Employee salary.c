//
// Created by Sk Naser Hussain on 26-11-2023.
//
//Write a c program to demonstrate array of structures
#include <stdio.h>

int main() {
    struct employee {
        char name[100];
        int age;
        float salary;
    };

    struct employee em[10];
    int counter, count;
    float totalSalary = 0;

    printf("Enter Number of Employees\n");
    scanf("%d", &count);

    for (counter = 0; counter < count; counter++) {
        printf("Enter Name of Employee\n");
        getchar(); // Consume the newline character left in the buffer
        fgets(em[counter].name, sizeof(em[counter].name), stdin);

        printf("Enter the Age and Salary of Employee\n");
        scanf("%d %f", &em[counter].age, &em[counter].salary);

        totalSalary += em[counter].salary;
    }

    printf("Average Salary of an Employee is %f\n", (float)totalSalary / count);

    return 0;
}
/***
* /tmp/s4GbDqe73s.o
Enter Number of Employees
2
Enter Name of Employee
Rahim
Enter the Age and Salary of Employee
20 15000
Enter Name of Employee
Salman
Enter the Age and Salary of Employee
22 18000
Average Salary of an Employee is 16500.000000
*/