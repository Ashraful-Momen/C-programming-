#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct person
{
    int age;
    float salary;
};
int main ()
{
    struct person p1;
    printf("Enter the person information: ");
    printf("\n Enter the age: ");
    scanf("%d",&p1.age);
    printf("\n Enter the Salary : ");
    scanf("%f",&p1.salary);
    printf("\nThe Age is  :%d",p1.age);
    printf("\n The Salary is :%f",p1.salary);
}
