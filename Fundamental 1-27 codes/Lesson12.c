#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main ()
{
    int grade;
    printf("Enter your Number : ");
    scanf("%d",&grade);
    if (grade>100)
    {
        printf("Invalid number : ");
    }
    else if (grade>=80)
    {
        printf("your got A+");
    }
     else if (grade<=59)
    {
        printf("you Fail");
    }
     else if (grade<0)
    {
        printf("Invalid ");
    }
    getch();
    return 0;
}