#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int row,col,i,j,row2,co2;
    printf("Enter the number of Row for A Matrix: ");
    scanf("%d",&row);
    printf("\nEnter the number of Column for A Matrix:");
    scanf("%d",&col);
    //Input A matrix:
    int a[row][col];
    printf("Enter the Number of A Matrix elements: ");
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //Print A matrix element:
    printf("The Element of Matrix A: ");
    printf("\n");

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\t\t\n");
    }
    printf("Enter the number of Row for B matrix: ");
    scanf("%d",&row2);
    printf("\nEnter the number of Column for B matrix:");
    scanf("%d",&co2);
    //Input B Matrix:
    int b[row2][co2];
    printf("The Number of B Matrix elements: ");
    printf("\n");
     for(i=0;i<row2;i++)
    {
        for(j=0;j<co2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //B Matrix Output:
    printf("The Element of Matrix B: ");
    printf("\n");

     for(i=0;i<row2;i++)
    {
        for(j=0;j<co2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\t\t\n");
    }
    printf("\n");
    // Addition C=A+B matrix:
    int c[row][col];
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The Addition of A+B = \n");
    //Addition Output

    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\t\t");
    }

    getch();
    return 0;
}
