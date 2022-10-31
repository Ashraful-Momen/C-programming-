/*Call by value of Pointer*/
#include <stdio.h>
#include <conio.h>

void change(int x)
{
    x=10;
    printf("The value of x is : %d",x);
}
int main ()
{
    int n=20;
    change(20);
    printf("\nThe value of n is : %d",n);

    getch();
    return 0;
}
