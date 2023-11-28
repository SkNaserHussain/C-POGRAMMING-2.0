//
// Created by Sk Naser Hussain on 28-11-2023.
//
//Write a program in c to read data from a file and display.
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("sample.txt", "r");

    if (fp != NULL) {
        printf("FILE OPENED!\n");

        fgets(data, 100, fp);
        printf("%s", data);

        fclose(fp);  // Close the file after reading
    } else {
        printf("ERROR!\n");
    }

    return 0;
}
