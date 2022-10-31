#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Dynamic Memory Allocation fix : how to Null dynamic pointer;


int main()
{
    int *px= (int*)malloc(sizeof(int));
    printf("The address of px : %d",px);
    free(px); // if the value of px=10 now after free px=0
    px=NULL; //After null The pointing now &px=0 .... px = no pointing to other var location
    printf("\nThe address of px : %d",px);


    return 0;
}
