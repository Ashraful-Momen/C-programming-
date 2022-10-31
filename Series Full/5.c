#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Additional Series : Using While Loop.
int main ()
{
    int i=1,j=1,sum=0,num1=1,num2=1;
    printf("Enter the Last Number of Serie's: ");
    scanf("%d %d",&num1,&num2);
    printf("1*2+2*3+3*4+.....+%d*%d",num1,num2);
    while(i<=num1 && j<=num2)
    {
        sum=sum+num1*num2;
        i=i+1;
        j=j+1;    //Never FOrget to write down the increment;
       // num1=num1+1;
        //num2=num2+1;
    }
    printf("=%d",sum);
    getch();
    return 0;
}


