#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Prime Number: 
int main ()
{
    int num,i,count=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            ++count;
            break;

        }
    }
    if(count==0)
    {
        printf("\n It's a prime Number! ");
    }
    else
    {
        printf("\n It's not a prime number ! ");
    }


    getch();
    return 0;
}