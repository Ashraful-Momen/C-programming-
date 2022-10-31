#include <stdio.h>
#include <conio.h>

//Swapping The value of var by Function with Pointer:

void Swapping(int *p,int *y);
void Swapping(int *p,int *y)
{
    int tem;
    tem=*p;
    *p=*y;
    *y=tem;
}
int main()
{
    int x=10,y=20;
    Swapping(&x,&y);
    printf("The value of x: %d and The Value of Y: %d",x,y);

    getch ();
    return 0;
}


