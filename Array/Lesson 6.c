#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    int n,a[n],b[n],i;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The value of Copy elements of array is:");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf(" %d ",b[i]);
    }
    return 0;
}
