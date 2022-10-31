#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//passing variable by function
struct person
{
    char name[30];
    int age;
    float salary;

};
void display(struct person p)
{
     fflush(stdin);
    printf("\n Name : %s",p.name);

    printf("\n Age : %d",p.age);
    printf("\n Salary: %f",p.salary);
}
int main ()
{
    struct person  p1;//= {"Shuvo",10,10000000};
    p1.age=10;
    p1.salary=1000000;
    fflush(stdin);
    //char name[30]="Md.Ashraful Momen";
    fflush(stdin);
    gets(p1.name);
    strcpy(p1.name,name);
    display(p1);
    getch();
    return 0;
}
