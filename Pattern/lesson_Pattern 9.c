#include <stdio.h>
int main ()
{
    int num,row,col,space;
    printf("Enter Number: ");
    scanf("%d",&num);
    for (row=1;row<=num;row++)
    {
        for(space=1;space<=num-row;space++)
        {
            printf(" ");
        }
        for (col=1;col<=2*row-1;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
    for (row=num-1;row>=1;row--)
    {
        for(space=1;space<=num-row;space++)
        {
            printf(" ");
        }
        for (col=1;col<=2*row-1;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
    return 0;
}
