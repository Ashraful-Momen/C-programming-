//Dynamic Memory Allocation by Malloc() in Heap Memory need <stdlib.h >
//Solving the Stack Code
// *malloc is a generic or void point : can point another pointer 
// malloc is a void pointer but int *px is a integer pointer , so we have to type cast. (int*)malloc(sizeof((*px))); 


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *px ;
    px = (int *)malloc(sizeof((*px)));
    *px = 20;
    printf("The of px is : %d",*px);

    getch();
    return 0;
}
