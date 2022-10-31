#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Additional Series : Using While Loop.
int main ()
{
    int i=1,sum=0,num;
    printf("Enter the Last Number of Serie's: ");
    scanf("%d",&num);
    printf("1+3+5+.....+%d",num);
    while(i<=num)
    {
        sum=sum+i;
        i=i+2;    //Never FOrget to write down the increment;
    }
    printf("=%d",sum);
    getch();
    return 0;
}


