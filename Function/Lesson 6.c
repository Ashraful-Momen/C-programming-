#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// Passing Array by Function :
void display(int a[])
{
    int i=0;
    for (i=0;i!=4;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main ()
{
    int name[]={10,20,30,40};
    display(name);
    getch();

    return 0;
}
