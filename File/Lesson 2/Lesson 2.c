#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *file;
    file=fopen("Momen.txt","a"); // w -> mode written file also over write but use append = a for mode to add text in file;
    char name []="Ashraful Momen";
    int length =strlen(name);
    int i;
    if (file ==NULL)
    {
        printf("File is not exit: ");
    }
    else
    {
        printf("File open\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file); //fputc is used for copy elements to file;
        }
        printf("\n File is written successfully : ");
        fclose (file);
    }
    getch();
    return 0;
}
