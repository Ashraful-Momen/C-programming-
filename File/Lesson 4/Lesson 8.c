#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    FILE *file;
    file = fopen("Lesson8.txt","a");
    int num,i,phone,balance;
    char name[30];
    if(file==NULL)
    {
        printf("File Does not exit: ");
    }
    else
    {
        printf("File Open: ");
        printf("Enter the Number of Students: ");
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            printf("\n Name: ");
            scanf("%s",&name);
            printf("\n Phone Number: ");
            scanf("%d",&phone);
            printf("\n Balance : ");
            scanf("%d",&balance);
            fprintf(file,"\n%s\t\t%d\t\t%d",name,phone,balance);
        }
        fclose(file);

    }
    getch();
    return 0;
}
