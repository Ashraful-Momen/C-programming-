#include <stdio.h>
#include <conio.h>
#include <string.h>
//Count the vowel , consonant,digit of a String :
int main ()
{
    char name[40],ch;
    printf("Enter your name : ");
    gets(name);
    int vowel=0,constan=0,digit=0,characters=0,i=0;
    while((ch=name[i])!='\0')
    {
        if(ch=='a' || ch=='e'|| ch == 'i'|| ch == 'o' || ch == 'u' || ch=='A' || ch=='E'|| ch== 'I'|| ch== 'O' || ch== 'U')
        {
            vowel++;
        }
       else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            constan++;
        }

         else if(ch>='0' || ch<='9')
        {
            digit++;
        }
        i++;

    }
    printf("The Number of Vowel of String is : %d",vowel);
    printf("\nThe Number of consonant of String is : %d",constan);
    printf("\nThe Number of Digit of String is : %d",digit);
    getch();
    return 0;
}
