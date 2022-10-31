#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int a,b,tem;
    printf("Enter the Tow Number : ");
    
    scanf("%d%d",&a,&b);
    printf("\n A=%d and B=%d",a,b);
    tem=a;
    a=b;
    b=tem;
    printf("\n After Swapping the Value is : A=%d and B=%d",a,b);
    return 0;
}