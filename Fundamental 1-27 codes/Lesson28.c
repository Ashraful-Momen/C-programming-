#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
//Armstrong Number : 153=1^3+2^3+3^3
int main ()
{
    int i,num,tem,rem,sum=0;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    tem=num;
    while (tem!=0)
    {
        rem=tem%10;
        sum=sum+(rem*rem*rem);
        tem=tem/10;
    }
    if (num==sum)
    {
        printf("\n%d is the Armstrong Number !",num);
    }
    else
    {
        printf("\n%d is not a Armstrong Number !",num);
    }
    getch();
    return 0;
}