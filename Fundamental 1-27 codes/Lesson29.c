#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
// Strong Number : 1145=1!+2!+3!
int main ()
{
    int i,tem,rem,sum=0,fact=1,num;
    printf("Enter Your Numeber: ");
    scanf("%d",&num);
    tem=num;
    while (tem!=0)
    {
        rem=tem%10;
        fact =1;// to solve the bugs in this code : Declear the variable vule before start into another faciton ;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        tem=tem/10;
    }
    if (sum==num)
    {
        printf("\n %d is Strong Number  ",num);
    }
    else
    {
        printf("\n%d  is not Strong Number ",num);
    }
    
    getch();
    return 0;
}