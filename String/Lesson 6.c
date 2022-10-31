#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
//String Copy by strcpy() Build In Function :
int main ()
{
    char source[]="Md.Ashraful Momen Shuvo";
    char target[40];
    strcpy(target,source);
    printf("The Copy of Target String is : %s",target);
    getch();
    return 0;
}
