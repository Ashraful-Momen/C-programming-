#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
// Series = 1-2+3-4+5-6...........n=?
// odd serise - even serise = Ans.
int main()
{
    int sum=0,i=0,num,even=0,odd=0;
    printf("1-2+3-4+5-6+............n=?");
    printf("\nEnter The Last Number of Serise : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
          if (i%2==0)
    {
        even=even+i;
    }
    else 
    {
        odd=odd+i;
    }

    }
  
    sum=odd-even;
    printf("Ans is : %d",sum);

    getch();
    return 0;
}