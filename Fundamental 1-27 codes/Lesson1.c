#include <stdio.h>
#include <conio.h>
int main ()
{
    int num;
    char letter;
    printf("Enter Lower letter : ");
    scanf("%c",&letter);
    printf("\n Your Upper Case letter is : %c",letter-32);
    char U = toupper(letter);
    printf("\n Upper Case Letter By Buildin Function: %c",U);
    getch();

    return 0;
}