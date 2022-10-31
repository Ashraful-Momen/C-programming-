#include <stdio.h>
#include <conio.h>
#include <string.h>
//String Upper and Lower function use :
int main ()
{
    char name[30];
    printf("Enter your Name :");
    gets(name);
    strupr(name);
    printf("\nThe Upper Value of string is : %s",name);
    strlwr(name);
    printf("\nThe Lower value of string is : %s",name);

    getch();
    return 0;
}
