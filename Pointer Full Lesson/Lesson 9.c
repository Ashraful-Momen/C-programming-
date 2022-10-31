//Dynamic Memory Allocation by Malloc() in Heap Memory need <stdlib.h >
//Solving the Stack Code

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
