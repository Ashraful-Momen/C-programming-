#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    //try Those Code First
   /* char name[30];
    printf("Input your name : ");
    scanf("%s",&name); //In string no need to diclear the array [] sizeof parametre
    printf("Your Full Name is : %s",name);
    // scanf () not work after space that's why we need to use the build in function gets(name)*/
    char Name2[30];
    printf("\nEnter your name Again to display your Full name: ");
    gets(Name2);
    printf("\nYour Full Name is : %s",Name2);
    getch();
    return 0;

}
