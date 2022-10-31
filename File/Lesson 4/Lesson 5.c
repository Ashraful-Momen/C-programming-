#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
//File Reading system : by getc()
int main ()
{
    FILE *file ;
    file =fopen("Momen.txt","r");
    char ch;
    if (file == NULL )
    {
        printf("File does not exit: ");
    }
    else
    {
        printf("\nFile open : \n");
         // For the single element copy use fgetc():
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);

        }

        fclose(file);
        printf("\nFile is written successfully!!! ");

    }
    getch();
    return 0;
}
