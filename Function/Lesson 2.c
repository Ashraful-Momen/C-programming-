#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// Adding function with void data type;
void sum(int a,int b,int c)
{
    printf("The add of Numbers: %d",a+b+c);
}
int main ()
{
    sum(10,20,30);
    getch();
    return 0;
}
