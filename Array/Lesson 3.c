#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int a[100],max,i,min,n;
    printf("Input the size of Array: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nThe max is :%d",max);
    printf("\nThe min is :%d",min);
    getch();
    return 0;
}
