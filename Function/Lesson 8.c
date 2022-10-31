#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Passing the String by Function :
void display(char a[])
{
   // puts(a);
   int i=0;
   while(a[i]!='\0')
   {
       printf("%c",a[i]);
       i++;
   }
}
int main ()
{
    char name [100];
    printf("Enter your name : ");
    int ans =gets(name);
    display(name);
    getch();
    return 0;
}
