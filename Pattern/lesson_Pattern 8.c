#include <stdio.h>
int main ()
{
    int num,row,col,space;
    printf("Enter Line Number: ");
    scanf("%d",&num);
    for (row=1;row<=num;row++)
    {
        for(space=1;space<=num-row;space++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }
    return 0;
}
