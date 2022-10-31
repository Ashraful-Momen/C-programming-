#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
//Use Pointer in Array in static memory or stack memory!!!

struct mystruct
    {
        int age;

        double height;
    };

int main()
{
    struct mystruct s1;
    s1.age=10;
    s1.height=4.7;
    printf("\nAge is : %d",s1.age);
    printf("\nHeight is : %lf",s1.height);


    struct mystruct *p1=&s1;
    (*p1).age=25;
    p1->age=30;
    (*p1).height=5.6;
    p1->height=5.7;

    printf("\n The age is : %d",p1->age);
    printf("\n The Height is : %lf",(*p1).height);

    getch();
    return 0;


}
