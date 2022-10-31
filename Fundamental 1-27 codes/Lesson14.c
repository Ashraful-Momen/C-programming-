#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int a;
int main()
{
    //Digit Spelling ;
    int b=10;
    printf("Please Input a Digit :");
    scanf("%d", &a);
    printf("\nYou Entered %d ", a);
    switch (a)
    {
    case (0):
        if (a<b)
            printf("\n zero");
        break;

    default:
        break;
    }
    getch();
    return 0;
}