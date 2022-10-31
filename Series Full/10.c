#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
// Febbonacci Serise : 0+1+2+3.............n=?

int main ()
{
    int i,num,sum=0,count=0,first=0,second=1,fibo=0;
    printf("0+1+2+3+.......+n=");
    printf("\n Enter The Last Number OF Serise : ");
    scanf("%d",&num);

    while(count<num)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else 
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
       
         printf("%d ",fibo);
         count++;
    }
    
    getch();
    return 0;
}