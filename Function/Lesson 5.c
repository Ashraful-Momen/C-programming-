#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
//Find The Exponent by A Function :
void display(int a);
int power(int b,int e);
void display(int a)
{
    printf("The Exponent is %d",a);
}
int power(int b,int e)
{
    int i=0;
    int multi=1;
    for (i=0;i<e;i++)
    {
        (multi=multi*b);
    }
    return multi;
}
int main ()
{
    int base,exponent;
    printf("Input the Base And Exponent: ");
    scanf("%d%d",&base,&exponent);
    int ans=pow(base,exponent);
    display(ans);
    getch();

    return 0;
}
