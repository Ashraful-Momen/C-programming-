#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//goto by Lebel: Have to use if also : 
int main ()
{
    int i = 0;
    Label_Name: 
        printf("\n %d ",i);
        i++;
        if (i<=5)
            {
                goto Label_Name;
            }
    getch();
    return 0;
}