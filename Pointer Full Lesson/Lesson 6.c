//Pass the value pointer to pointer;
#include <stdio.h>
#include <conio.h>

int main ()
{
    int x=10;
    int *px=&x;
    *px=20;
    printf("The value of x is : %d",*px);

    int **ppx=&px;
    **ppx=30;
    printf("\nThe Value of x is now : %d",**ppx);

     int ***pppx=&ppx;
    ***pppx=40;
    printf("\nThe Value of x is now : %d",***pppx);

    getch();
    return 0;
}
