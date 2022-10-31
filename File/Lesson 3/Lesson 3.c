#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    FILE *file;
    file = fopen("shuvo.text","a");
    char name [30];
    if (file == NULL )
    {
        printf("File doesn't exit");
    }
    else
    {
        printf("\n File is open ");
        printf("\nEnter your Name : ");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        fclose(file);
    }
    getch();
    return 0;
}
