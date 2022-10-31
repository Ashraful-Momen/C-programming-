#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *file;
    char text[80];
    file = fopen("Momen.txt","r");
    if(file == NULL )
    {
        printf("File is not exit: ");
    }
    else
    {
        printf("File is Open: \n");
        while (!feof(file))
        {
            fgets(text,79,file);
            printf("%s",text);
        }
        fclose(file);
    }
    getch();
    return 0;
}
