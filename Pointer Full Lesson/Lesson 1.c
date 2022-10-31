#include <stdio.h>
#include <conio.h>
/*The Value Printing with The Pointer*/
int main ()
{
    int x= 10 ;
    int * p ;

    p=&x;
    printf("The value of x : %d",x);
    printf("\nThe value of x : %d",*p);

    printf("\nThe Address of x : %d ", &x);
    printf("\nThe Address of x : %d ", p);

    printf("\nThe Address of P is : %d",&p);

    printf("\n The value of x: %d",*(&x));

    printf("\nSize of x is :%d",sizeof(x));
    getch();
    return 0;
}
