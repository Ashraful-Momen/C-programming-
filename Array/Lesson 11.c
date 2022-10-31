#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i,j,r,c,a[10][10],sum=0;
    printf("Enter the Row And Column of A Matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the Elements of A matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Printing The A Matrix :
    printf("A Matrix is : \n");
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {

            {
                printf(" %d",a[i][j]);


            }

        }
        printf("\n");
    }
    //Sum Of diagonal:
    printf("A Matrix Diagonal Element is : ");

    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf(" %d",a[i][j]);
                sum+=a[i][j];


            }

        }

    }

    printf("\n");

    printf("\n Sum of Diagonal Element is: %d",sum);
    getch();
    return 0;
}
