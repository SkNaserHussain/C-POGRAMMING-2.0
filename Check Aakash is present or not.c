//In a sunny day in B.Tech CSE section C, XYZ sir has entered in the class and checked whether Akash is present or not
#include<stdio.h>
int main(){
    int start_roll=123;
    int end_roll=196;
    int total_students=end_roll-start_roll+1;
    int roll_numbers[total_students];
    for(int i=0;i<total_students;i++){
        roll_numbers[i]=start_roll+i;
    }
    int roll_number_of_akash=139;
    int is_present=0;
        for(int i=0;i<total_students;i++){
            if(roll_numbers[i]==roll_number_of_akash){
                is_present=1;
                break;
            }
        }
        if(is_present){
            printf("Akash is present in the class.\n");
        }else{
            printf("Akash is not present in the class.\n");
        }
        return 0;

} 