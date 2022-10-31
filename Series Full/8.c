#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
// Series of Multiplication: 1*2*3*........n=?
int main ()
{
    int num,sum=1,i=1;
    printf("Enter the last number of Serise of Multiplication : ");
    scanf("%d",&num);
    printf("\n1*2*3*.........%d=",num);
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    getch();
    return 0;
}