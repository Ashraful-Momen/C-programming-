#include <stdio.h>
#include <string.h>
//Print The String Length By While Loop using :
int main ()
{
    char name[]="Shuvo";
    int i=0,length=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
        length++;
    }
    printf("The Length of string is : %d",length);
    printf("\nThe Length of String is : %d",i);

    return 0;
}
