#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char name[]="shuvo";
    char name2[]="My Name Is : ";
    int i =0,length=0;
    while (name2[i]!='\0')
    {
        i++;
        length++;
    }
    int j=0;
    while(name[j]!='\0')
    {
    name2[length+j]=name[j];
    j++;
    }
    printf("The ful of Name2 String is : %s",name2);
    getch();
    return 0;
}
