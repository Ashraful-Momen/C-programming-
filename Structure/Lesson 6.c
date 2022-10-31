#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct person
{
    char name[30];
    int age;
    float salary ;

};
int main ()
{
    struct person p[3];
    int i=0;
    for (i=0;i<3;i++)
    {
        printf("Enter the info for %d",i+1);
        printf("\n Name: ");
        fflush(stdin);
        gets(p[i].name);
        printf("\n Age: ");
        scanf("%d",&p[i].age);
        printf("\n Salary :");
        scanf("%f",&p[i].salary);
    }
      for (i=0;i<3;i++)
    {
        printf("\nThe info for person %d",i+1);
        printf("\n Name : %s",p[i].name);
        printf("\n Age: %d",p[i].age);
        //scanf("%d",p[i].age);
        printf("\n Salary : %.2f",p[i].salary);
        //scnaf("%f",&p[i].salary)
    }
    getch();
    return 0;
}

