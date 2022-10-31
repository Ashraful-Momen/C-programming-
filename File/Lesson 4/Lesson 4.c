#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    FILE *file ;
    file = fopen("Momen.txt","a");
    char name[30];
    int age=0;
    if(file==NULL )
    {
        printf("File Does not exit: ");
    }
    else
    {
        printf("File open \n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name :%s and Age: %d",name,age);
    }
    getch();
    return 0;
}
