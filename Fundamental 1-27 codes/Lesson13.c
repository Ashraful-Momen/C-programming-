#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main ()
{
    typedef char Letter;
     Letter L;
    printf("Enter an Latter: ");
    scanf("%c",&L);
    if (L=='A' || L == 'U' )
    {
        printf("\n %c is Vowel ",L);
    }
    else
    {
        printf("This is an Consonent!");
    }
    getch();
    return 0;
}