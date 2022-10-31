//Dynamic Heap memory use the pointer with array to use :
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct mystruct
{
    int age;
    double height;

};

int main ()
{
    struct mystruct *p1;
    p1=(struct mystruct*) malloc(sizeof(struct mystruct));
    (*p1).age=10;
    p1->height=5.6;

    printf("\n Age is : %d",(*p1).age);
    printf("\n Height is : %0.2lf",p1->height);

    getch();

    return 0;
}
