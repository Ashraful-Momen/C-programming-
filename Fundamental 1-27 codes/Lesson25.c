#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
// sum of Digits :
int main ()
{
    int num,i,sum=0,rem,tem;
    printf("Enter your Number: ");
    scanf("%d",&num);
    tem=num;
    while(tem!=0)
    {
        rem=tem%10;
        sum=sum+rem;
        tem=tem/10;

    }
    printf("\nThe sum of Number is : %d",sum);
    getch();
    return 0;
}