//
// Created by SK NASER HUSSAIN on 02-10-2023.
//
#include<stdio.h>
#include<math.h>
int main ()
{
    float x1,y1,x2,y2,distance;
    printf("ENTER THE POINT 1(x1,y1):\n");
    scanf("%f%f",x1,y1);
    printf("ENTER THE POINT 2(x2,y2):\n");
    scanf("%f%f",&x2,y2);
    distance=sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("THE DISTANCE BETWEEN (%f , %f) and (%f , %f) IS= %f",x1,y1,x2,y2);

}
/***
* ENTER THE POINT 1(x1,y1):
1 2
ENTER THE POINT 2(x2,y2):
3 4
THE DISTANCE BETWEEN (1.000000 , 2.000000) and (3.000000 , 4.000000) IS= 8.000000:
*/