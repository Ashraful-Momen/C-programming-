#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Bitwaise Operation 
int main ()
{
    int a=2,b=4;
    int c;
    c=a&b;
    printf("\n A and B =%d",c);
    c=a|b;
    printf("\n A or B =%d",c);

    getch();
    return 0;
}