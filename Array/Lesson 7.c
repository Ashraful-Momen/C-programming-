#include <stdio.h>
#include <conio.h>
//2D array : row *column =elements
int main ()
{
    int n,r=0,c=0,i,j;//r=row and c=column
    printf("Enter the Number of Row :");
    scanf("%d",&r);
    printf("\nEnter the Number of column :");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
     for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
