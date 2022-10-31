#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Array : sum,avg... from user input;
int main ()
{
    int a[100],sum=0,n,i;
    printf("Enter the size number of array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("\n Array[%d] index value of array is :%d",i,a[i]);
    }
    printf("\n The sum is : %d",sum);
    int average = (float)sum/n;
    printf("\n The Avg is : %0.2f",(float)average);

    float avg = sum/n;
    printf("\n The Avg is : %f",avg);
    return 0;
}
