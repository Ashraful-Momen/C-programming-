#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Pass value by the pointer to the pointer by memory address :

int main ()
{
    int x=10;
    int *px1 =&x;
    int *px2=&px1;
    px2=px1;
    *px2=20;
    x=30;

    printf("The value of x is : %d",*px2);

    getch();

    return 0;

}
