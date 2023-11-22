//
// Created by Sk Naser Hussain on 22-11-2023.
//
#include <stdio.h>
int main(){
    FILE *fp;
    char data[100];
    fp= fopen("sample.txt","r");
    if(fp!=NULL){
        printf("FILE OPENED !");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else{
        printf("ERROR !");
    }
}