//Pointer Arithmetic : increment as size of data type:
// increase as the size of data-type:
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch='a';
    char *c=&ch;
    printf("The address of ch is %d",c);
    ++c;
    printf("\nThe address of ch is %d",c);

    return 0;
}
