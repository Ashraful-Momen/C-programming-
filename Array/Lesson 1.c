#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
    int A[3],sum=0;
    A[0]=10;
    A[1]=20;
    A[2]=30;
   // A[3]={10,20,30};
    int i;
    for (i=0; i<3; i++)
    {
        printf("%d index value is : %d \n",i,A[i]);
         sum = sum+A[i];
    }
    printf("\n The sum of array is : %d",sum);
    getch();
    return 0;
}
