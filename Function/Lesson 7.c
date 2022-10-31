#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//Find Max in Function
void display(int a)
{
    printf("The Max Value is : %d",a);
}
int n;
int max(int a[])
{
    int i,max=a[0];
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;

}
int main()
{
    int i,a[50];
    printf("Input the Array index Number: ");
    scanf("%d",&n);
    printf("\nInput the Array Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ans = max(a);
    display(ans);
    getch();




}
