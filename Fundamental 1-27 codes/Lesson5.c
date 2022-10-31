#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//sum of Number and Type Casting : 
int main ()
{
    int a,b,c,sum;
    float avg;
    printf("Enter 3 digits: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("\n Sum is : %d And Average is : %0.2f",sum,avg);
    getch();
    return 0;
}