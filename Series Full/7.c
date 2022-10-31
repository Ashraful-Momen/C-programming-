#include <stdio.h>
#include <conio.h>
//Series: 1+1/2+1/3+.......+1/n
int main()
{
    double i=1,sum=0,num;
    printf("1+1/2+1/3+.......+1/n");
    printf("Enter The Last Number Of The Series: ");
    scanf("%lf",&num);
    printf("1+1/2+1/3+.......+1/%lf",num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/i);
    }
    printf("= %.2lf ",sum);


    getch();
    return 0;
}