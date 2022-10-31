#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Find the Square by Function :
void square(int a)
{
    printf("The Square is :%d",a*a);
}
int main ()
{
    int Number;
    printf("Input the value for square : ");
    scanf("%d",&Number);
    square(Number);
    getch();
    return 0;
}
