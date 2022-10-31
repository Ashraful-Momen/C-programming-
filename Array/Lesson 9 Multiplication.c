#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int row,col,i,j,k,row2,co2,sum=0,a[10][10],b[10][10],c[10][10];
    printf("Enter the number of Row for A Matrix: ");
    scanf("%d",&row);
    printf("\nEnter the number of Column for A Matrix:");
    scanf("%d",&col);
    printf("Enter the number of Row for B matrix: ");
    scanf("%d",&row2);
    printf("\nEnter the number of Column for B matrix:");
    scanf("%d",&co2);
    while(col!=row2)
    {
        printf("1st Matrix Column is not Equal to Second Matrix Row: \n ");
        printf("Enter the number of Row for A Matrix: ");
        scanf("%d",&row);
        printf("\nEnter the number of Column for A Matrix:");
        scanf("%d",&col);
        printf("Enter the number of Row for B matrix: ");
        scanf("%d",&row2);
        printf("\nEnter the number of Column for B matrix:");
        scanf("%d",&co2);
    }
    //Input A matrix:
    //int a[row][col];
    printf("Enter the Number of A Matrix elements: ");
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //Print A matrix element:
    printf("The Element of Matrix A: ");
    printf("\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = %d ",i,j,a[i][j]);
        }
        printf("\t\t\n");
    }
    /* printf("Enter the number of Row for B matrix: ");
     scanf("%d",&row2);
     printf("\nEnter the number of Column for B matrix:");
     scanf("%d",&co2);*/
    //Input B Matrix:
//    int b[row2][co2];
    printf("The Number of B Matrix elements: ");
    printf("\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<co2; j++)
        {
             printf("B[%d][%d] =",i,j);
            scanf(" %d",&b[i][j]);
        }
    }
    printf("\n");
    //B Matrix Output:
    printf("The Element of Matrix B: ");
    printf("\n");

    for(i=0; i<row2; i++)
    {
        for(j=0; j<co2; j++)
        {
            printf("B[%d][%d] = %d ",b[i][j]);
        }
        printf("\t\t\n");
    }
    printf("\n");
    // Multiplication:  C=A*B matrix:
//    int c[row][col];
    for (i=0; i<row; i++)
    {
        for(j=0; j<co2; j++)
        {
            for(k=0; k<col; k++)
            {
                sum = sum + a[i][k]+b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }

    }


    printf("The Multiplication of A*B = \n");
//Multiplication Output

    for(i=0; i<row; i++)
    {
        printf("\n");
        for(j=0; j<co2; j++)
        {
             printf("A[%d][%d] =",i,j);
            printf("%d ",c[i][j]);
        }
        printf("\t\t");
    }

    getch();
    return 0;
}
