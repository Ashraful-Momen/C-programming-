#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <stdlib.h>
//Find the Factoral number :

int main ()
{
    int factorial;
    int store=1;
    printf("Enter any Number For Factorial: ");
    scanf("%d",&factorial);
    int i;
    for(i=1;i<factorial;i++)
    {
        store=factorial * i;
    }
    printf("\n The Factorial Number is : %d",store);
    getch();
    return 0;
}