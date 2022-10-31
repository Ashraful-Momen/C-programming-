#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//concatination is short form is cat = addition or sum of 2 String :
int main ()
{
    char name1[]="My Name is : ";
    char name2[]="Md.Ashraful Momen Shuvo!!!";
    strcat(name1,name2);
    printf("Total Copy string ===> %s",name1);
    getch();
    return 0;
}
