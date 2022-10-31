#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
//Break and Continue use with if condition and also switch:
int main ()
{
    int i=0;
    for (i=0;i<100;i++)
    {
        if (i%2==0)
        {
            printf("\n %d",i);
            continue;
        }
        if (i==100)
        {
            break;
        }
    }
    getch ();
    return 0;
}