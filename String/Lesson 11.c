#include <stdio.h>
#include <conio.h>

#include <string.h>
int main ()
{
    char Name[]="shuvo";
    char Passwd[]="shuvosadfadf6";
    printf("Enter Your Password: ");
    gets(Passwd);
    int d=strcmp(Name,Passwd);
    if(d==0)
    {
        printf("Your String is Equal");
    }
    else
    {
        printf("Your String is not Matching!!!");

    }
    getch();
    return 0;
}
