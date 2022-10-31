#include <stdio.h>
#include <conio.h>
/*Value Swapping With The Pointer*/

int main ()
{
    int x=10,y=20,tem=0;

    printf("The value of x : %d",x);
    printf("\nThe Value of y: %d",y);

    int *px=&x,*py=&y;

    tem=*px;
    *px=*py;
    *py=tem;
    // After Swapping the of x and y;
    printf("\nThe value of x : %d",*px);
    printf("\nThe value of y : %d",*py);


    getch();

    return 0;
}
