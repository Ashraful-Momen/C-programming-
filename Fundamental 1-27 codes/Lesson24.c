#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//GCD AND LCD: 
int main ()
{
    int num,i=1,n1,n2,tem1,tem2,rem,gcd,lcd;
    printf("Enter Your Number: ");
    scanf("%d%d",&n1,&n2);
    tem1=n1;
    tem2=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;

    }
    // n1 == GCD;
    gcd=n1;
    printf("\n GCD is :%d",n1);
    //LCD = (n1*n2)/gcd;
    lcd = (tem1*tem2)/gcd;
    printf("\n LCD is : %d",lcd);
    getch();
    return 0;
}