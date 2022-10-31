#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Dynamic memory save for array with pointer: working with heap memory

int main ()
{
    int i=0;
    int x[2]={10,20};
    int *px=(int*)malloc(2*sizeof(int ));
    px=&x[0];
    for (i=0;i<2;i++)
    {
        printf("\n The value of %d index is : %d",i,*px);
        *px++;
    }

    return 0;
}
