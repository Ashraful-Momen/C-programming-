#include <stdio.h>
int main ()
{
    int num,row,col,space;
    printf("Enter your Row Number: ");
    scanf("%d",&num);
    for(row=1; row<=num; row++)
    {
        for(space=1; space<=num-row; space++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {

            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}
