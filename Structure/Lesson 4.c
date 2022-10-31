#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
    int age;
    float salary;
};
int main ()
{
    struct person p1= {10,500000};
    struct person p2;
    p2=p1;
    if (p1.age==p2.age && p1.salary == p2.salary)

        printf("\n The person is Both Equal : ");

    else

        printf("\n The Person is not Equal: ");

    getch();
    return 0;
}
