#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//Palindrome string check !!!
//bugs not working for 3 palindrome words!!!! sol: Tell the copy Last String Where finished!
int main ()
{
    char name[40];

    printf("Enter palindrome word: ");
    gets(name);
    printf("your entered string is : %s",name);
    char name2[40];
    int i=0,len=0,j=0;
    while (name[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        name2[j]=name[i];
    }
    name2[j]='\0';// After copy element tell the compiler where the string finish = string[j]=null;
    printf("\nyour reversed string is : %s ",name2);
    int d = strcmp(name2, name);
    if(strcmp(name2, name)==0)
    {
        printf("\nyour string is palindrome !");
    }
    else
    {
        printf("\nyour string is not palindrome: ");
    }
    getch();
    return 0;

}
