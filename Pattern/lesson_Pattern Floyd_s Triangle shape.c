#include <stdio.h>
int main ()
{
    int n,row,col,count=0;
    printf("Enter Row Number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t",++count);
            //count++;

        }
        printf("\n");
    }
    return 0;
}

