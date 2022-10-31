//Multiplication Table we can use

#include <stdio.h>
int main ()
{
    int num,row,col;
    printf("Enter The Line Number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for (col=1;col<=row;col++)
        {
            printf("%d X %d = %d \t",row,col,col*row);
        }
        printf("\n");
    }
    return 0;
}
