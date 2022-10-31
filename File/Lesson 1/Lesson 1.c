#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// file open:
int main ()
{
    FILE *file;
    file = fopen("shuvo.txt","w");
    if (file == NULL)
        printf("/File Doesn't Exit: ");
    else
        printf("File Exit");
    fclose(file);
    getch();
    return 0;
}
