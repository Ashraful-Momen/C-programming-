#include <stdio.h>
#include <conio.h>
int main ()
{
    int num;
    char letter;
    printf("Enter Upper Case letter : ");
    scanf("%c",&letter);
    printf("\n Your Upper Case letter is : %c",letter+32);
    char L = tolower(letter);
    printf("\n Upper Case Letter By Buildin Function: %c",L);
    //getch();

    return 0;
}