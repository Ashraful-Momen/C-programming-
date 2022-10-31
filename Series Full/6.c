#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Series: 1^2+2^2+3^2+........+n^2
int main ()
{
    int i=1,sum=0,num;
    printf("Enter The Last Number of Series: ");
    scanf("%d",&num);
    printf("1^2+2^2+3^2+.......+%d^2",num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i*i;
    }
    printf("=%d",sum);

    getch();
    return 0;
}