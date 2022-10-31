#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    // Increment and Decrement :
    int x=10;
    printf("\n X is : %d",x++);//x=10
    printf("\n X is :%d",x);//x=11
    printf("\n X is : %d",++x);//x=12
    printf("\n X is :%d ",x--);//x=12
    printf("\n X is : %d",--x);//x=11-1=10
    return 0;
}