#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// Multiplication Table: 
int main ()
{
    int num,i,mul=1;
    printf("Enter your number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",i,num,i*num);
    }
    
    getch();
    return 0;
}