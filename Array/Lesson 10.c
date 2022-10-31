#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
    int i=0,j=0,r1,c1,A[10][10],transpose[10][10];

    printf("Enter The Raw and Column for A matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Print A Matrix:
    printf("A Matrix is :\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" %d",A[i][j]);

        }
        printf("\n");
    }

    printf("\n");
     // Assign Transpose Matrix from A Matrix:
     for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            transpose[j][i]=A[i][j];

        }
        printf("\n ");
    }

    //Transpose Matrix: Output
    printf("Transpose Matrix is : \n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {

            printf(" %d",transpose[i][j]);

        }
        printf("\n");
    }
    return 0;
}
