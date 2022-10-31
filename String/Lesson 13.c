#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//Swapping The String Value :
int main ()
{
    char s1[30]="Bangladesh";
    char s2[30]="india";
    char tem[40];
    printf("Before the swapping the string value of s1 is : %s",s1);
    printf("\nBefore the swapping the string value of s2 is : %s",s2);
    strcpy(tem,s1);
    strcpy(s1,s2);
    strcpy(s2,tem);
    printf("\nAfter the swapping the string value of s1 is : %s",s1);
    printf("\nAfter the swapping the string value of s2 is : %s",s2);
    getch();
    return 0;
}
