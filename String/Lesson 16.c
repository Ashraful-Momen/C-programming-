#include <stdio.h>
#include <conio.h>
#include <string.h>
//Count The Capital And Small Latter in A String :
int main ()
{
    char name [30];
    printf("Enter your Name : ");
    gets(name);
    printf("You Entered your name is : %s",name);
    int i,Upper,Lower,Digit;
     i=Upper=Lower=Digit=0;
    char ch=0;
    while(name[i]!='\0')
    {
        if(name[i]>=65 && name[i]<=90)
        {
            Upper++;
        }
        if(name[i]>=97 && name[i]<=122)
        {
            Lower++;
        }
        if(name[i]>=48 && name[i]<=57)
        {
            Digit++;
        }
        i++;
    }
    printf("\nThe Number of Capital Letter is : %d",Upper);
    printf("\nThe Number of Small Letter is : %d",Lower);
    printf("\nThe Number of Digit is : %d",Digit);
    getch();
    return 0;
}
