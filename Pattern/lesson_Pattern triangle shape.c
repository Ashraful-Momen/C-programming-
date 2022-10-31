#include <stdio.h>
int main ()
{
    int num,row,space,col;
    printf("Enter Row Number:");
    scanf("%d",&num);
    for (row =1; row<=num; row++)
    {
        for(col=1; col<=row; col++)
            if( col==1|| row==num || col==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        printf("\n");
    }
    return 0;
}

