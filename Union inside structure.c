//
// Created by sknas on 27-11-2023.
//
//write a program in C to create a union inside a structure
#include <stdio.h>
int main()
{
    int rev,n,i;
    printf("Enter number of students >> ");
    scanf("%d",&n);
    struct cprog{
        char name[45];
        int ch;
        union {
            long int ph; //for phone number
            char email[50]; //for email id
        };
    }stu[n];

    for(i=0;i<n;i++) {
        printf("\nEnter name of student %d to link contact >> ",i+1);
        getchar();
        gets(stu[i].name);
        l1:
        printf("Enter :\n1. To enter phone number\n2. To enter email address \n");
        scanf("%d", &stu[i].ch);
        if (stu[i].ch == 1) {
            printf("\nEnter phone number >> ");
            scanf("%ld", &stu[i].ph);
            printf("\nDetails saved successfully !!!");
        } else if (stu[i].ch == 2) {
            printf("\nEnter email address >>");
            scanf("%s", &stu[i].email);
            printf("\nDetails saved successfully !!!");
        }else {
            printf("WRONG CHOICE !!! Please try again !");
            goto l1;
        }
    }
    printf("\nEnter 0 to view saved details , any other number to exit >> ");
    scanf("%d",&rev);

    if(rev==0) {
        for(i = 0;i < n;i++){
            printf("\nStudent %d name >> %s", i + 1, stu[i].name);
            if (stu[i].ch == 1)
                printf("\nLinked phone number is %ld", stu[i].ph);
            else if (stu[i].ch == 2)
                printf("\nLinked email address is %s", stu[i].email);
        }
    }
}
/***
* Enter number of students >> 5
Enter name of student 1 to link contact >> X
Enter :
1. To enter phone number
2. To enter email address
1
Enter phone number >> 2240
Details saved successfully !!!
Enter name of student 2 to link contact >> Y
Enter :
1. To enter phone number
2. To enter email address
2
Enter email address >>name@gmail.com
Details saved successfully !!!
Enter name of student 3 to link contact >> Z
Enter :
1. To enter phone number
2. To enter email address
1
Enter phone number >> 1991
Details saved successfully !!!
Enter name of student 4 to link contact >> P
Enter :
1. To enter phone number
2. To enter email address
2
Enter email address >>example@gmail.com
Details saved successfully !!!
Enter name of student 5 to link contact >> B
Enter :
1. To enter phone number
2. To enter email address
1
Enter phone number >> 18970
Details saved successfully !!!
Enter 0 to view saved details , any other number to exit >> 0
Student 1 name >> X
Linked phone number is 2240
Student 2 name >> Y
Linked email address is name@gmail.com
Student 3 name >> Z
Linked phone number is 1991
Student 4 name >> P
Linked email address is example@gmail.com
Student 5 name >> B
Linked phone number is 18970
*/