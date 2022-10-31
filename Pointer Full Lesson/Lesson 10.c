#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Null pointer: How to use ;

int main ()
{
    char ch='a';
    char *c =&ch;
    printf("The c pointer is pointing to c by the address of : %d",&ch);
    printf("\nThe c pointer is pointing to c by the address of : %d",c);
    c=NULL;
    printf("\nThe c pointer is Null  the  c pointer   the address is now: %d",c);

    getch();
    return 0;
}
