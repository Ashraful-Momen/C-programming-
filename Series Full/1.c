#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Additional Series: 
int main ()
{
    int i=0,sum=0,num;
    printf("Enter the last Number of series: ");
    scanf("%d",&num);
    printf("1+2+3+.....+%d",num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("=%d",sum);
    getch();
    return 0;
}