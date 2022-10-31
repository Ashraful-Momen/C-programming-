#include <stdio.h>
int main ()
{
    int n,row,col,space=1;
    printf("Enter Row Number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
            //count++;

        }
        for(col=row-1;col>=1;col--)
            printf("%d ",col);
        printf("\n");
    }
    return 0;
}


