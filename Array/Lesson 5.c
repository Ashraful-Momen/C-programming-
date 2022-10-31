#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int value,i,n,pos=-1;
    int a[4]={0,1,2,3};
    printf("Enter the value for search");
    scanf("%d",&value);
    for (i=0;i<4;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }

    }
    if(pos==-1)
    {
        printf("\nThe item value is not found");
    }
    else
    {
        printf("\n The item value is found of %d in position :%d",a[i],pos);
    }
    getch();
    return 0;
}
