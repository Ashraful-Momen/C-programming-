#include <stdio.h>
#include <conio.h>
#include <string.h>
//Reverse Any String with the Build in Function:
int main ()
{
    char name[]="Md.Ashraful Momen Shuvo";
    //char reverse_string[40];
    strrev(name);
    printf("The Reverse String is: %s",name);
    getch();
    return 0;
}
