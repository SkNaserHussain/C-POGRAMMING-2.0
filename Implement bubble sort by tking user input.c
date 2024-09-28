//Write a program in C to implement bubble sort and if the elements are already sorted then it will not work.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d of array",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }
}
printf("The sorted array is:\n");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}