//
// Created by Sk Naser Hussain on 20-12-2023.
//
////Write a program in c to list all files from a directory.
#include <dirent.h>
#include <stdio.h>

int main(void) {
    DIR *d;
    struct dirent *dir;


    d = opendir(".");
    if (d == NULL) {
        printf("Error opening directory");
        return 1;
    }


    while ((dir = readdir(d)) != NULL) {
        printf("%s\n", dir->d_name);
    }


    if (closedir(d) != 0) {
        printf("Error closing directory");
        return 1;
    }

    return 0;
}
/***
 * .profile
.bash_logout
.
.bashrc
..
target
example.txt
dosya.txt
library.txt
userData.csv
courses.txt
data_korban.txt
semesters.txt
output17.txt
students.txt
a2.txt
 */
