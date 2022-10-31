// Array value printing by the Pointer:
#include <stdio.h>
#include <conio.h>

int main ()
{
    int i=0;
    int Array[4]={10,20,30,40};
    int *pA=&Array[0];
    for (i=0;i<4;i++)
    {
        //printf("\n %d Index , Value is : %d",i,Array[i]);

        printf("\n %d Index , Value is : %d",i,*pA);
        *pA++;
    }

    getch();
    return 0;

}
