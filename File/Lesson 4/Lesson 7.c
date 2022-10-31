#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    FILE *file;
    file = fopen("Lesson7.txt","r");
    char text[30];


    if (file== NULL)
    {
        printf("File not exit: ");
    }
    else
    {
        printf("File Open: \n");
        fscanf(file,"%s",&text);
        printf("%s",text);
        fclose(file);
    }
    getch();
    return 0;
}
