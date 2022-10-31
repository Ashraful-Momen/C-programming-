//Static Memory Allocation Problem : VVI;
//Stack Problem;
#include <stdio.h>
#include <conio.h>
#include <math.h>
int * ChangeValue()
{
    int x=20;
    printf("\nThe value of x is : %d",x); // The Local value of var is stored is Stack ;
    return &x;
}

int main ()
{
    int *y=ChangeValue();
    //After Finishing the call of Function stack value of Local var is non exit ;
    printf("\nThe value of Y : %d", *y);

    int z =400;
    printf("\nThe Value of Z is : %d", z);
    return 0;
}
