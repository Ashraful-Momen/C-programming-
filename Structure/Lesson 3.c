#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// Structure value input method:
struct person
{
    int age ;
    float salary;

};
int main ()
{
    //method 1
    struct person p1={25,2500000};
    struct person p2,p3;
    //method 2 element ways assignment
    p2.age=30;
    p2.salary=1000001;
    //structure variable assignment:
    p3=p2;
    printf("\nThe person 1 age is :%d",p1.age);
    printf("\nThe person 1 salary is :%f",p1.salary);
    printf("\nThe person 2 age is :%d",p2.age);
    printf("\nThe person 2 salary is :%f",p2.salary);
    printf("\nThe person 3 age  is :%d",p3.age);
    printf("\nThe person 3 salary is :%f",p3.salary);
    getch();
    return 0;
}
