#include <stdio.h>
int main ()
{
    int num,row,col;
    printf("Enter Line Number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",row+64);
        }
        printf("\n");
    }
    return 0;
}
