#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
// Reverse Number ***
int main ()
{
    int i,rem,sum=0,num,tem;
    printf("Enter your Numebr: ");
    scanf("%d",&num);
    tem=num;
    while(tem!=0)
    {
        rem=tem%10;
        sum=sum*10+rem;
        tem=tem/10;
    }
    printf("\n Your Reverse Number is : %d",sum);
    getch();
    return 0;
}