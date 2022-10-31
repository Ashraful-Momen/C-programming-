#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


//String Elements Print with While loop()
//Don't use %s here cause code not working as well!!!;
int main ()
{
    char shuvo[]="shuvo";
    int i=0;
    while(shuvo[i]!='\0')
    {
        printf("%c",shuvo[i]);//use here array perameter of array[i]; and also Don't Forget to use %c
        i++;
    }

    getch();

    return 0;
}
