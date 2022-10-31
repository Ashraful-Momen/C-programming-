#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//Reverse The String without Build in Function :
int main ()
{
    char name[]="Md.Ashraful Momen";
    char rev[40];
    int i=0,len=0,j=0;
    while(name[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0;j++,i--)
    {
        rev[j]=name[i];
    }
    printf("The Reverse String is : %s",rev);
    getch();
    return 0;
}
