#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//VVI for array with pointer use:
int main ()
{
    int arr[3]={10,20,30};
    printf("\nThe address of 0 index is : %d",&arr[0]);
    printf("\nThe address of 0 index is : %d",arr); // Also print the address of 0 index:

    printf("\nThe value of 0 index is : %d ",*(arr));
    printf("\nThe value of 0 index is : %d ",*(&arr[0]));//same as the upper line ;

    printf("\n\n The value of 1 index is : %d",*(arr+1));// 2 index value
    printf("\n\n The value of 1 index is : %d",*(arr+2));//3 index value

    getch();
    return 0;
}
