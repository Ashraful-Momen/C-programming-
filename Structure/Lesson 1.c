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
    p1.age=25;
    p1.salary=100000.2;
    printf("\n The Person age is : %d",p1.age);
    printf("\n The Person salary is : %0.2f",p1.salary);
    getch();
    return 0;
}
