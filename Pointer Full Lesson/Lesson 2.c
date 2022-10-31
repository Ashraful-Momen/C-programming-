#include <stdio.h>
#include <conio.h>
/* Addition with The Pointer*/
int main ()
{
    int Number1,Number2,Sum=0;
    int *p1=&Number1;
    int *p2=&Number2;
    Sum = *p1+*p2;
    printf("\n The Addition is : %d",Sum);


    return 0;
}
