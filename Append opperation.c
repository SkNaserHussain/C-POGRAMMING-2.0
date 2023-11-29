//
// Created by Sk Naser Hussain on 29-11-2023.
//
//Write a c program to perform append operation in a file.
#include <stdio.h>

int main()
{
    char file_name[100], user_data[100];
    printf("Enter file name:\n");
    fgets(file_name, sizeof(file_name), stdin);
    FILE *fp;
    fp = fopen(file_name, "a");
    if (fp != NULL)
    {
        printf("FILE FOUND!\n");
        printf("Enter something to be saved in file:\n");
        fgets(user_data, sizeof(user_data), stdin);
        fprintf(fp, "%s", user_data);
        printf("Data saved in file\n");
        fclose(fp);
    }
    else
    {
        printf("FILE NOT FOUND!\n");
    }
    return 0;
}
