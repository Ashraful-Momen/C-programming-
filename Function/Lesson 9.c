#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//Find The Factorial Number :
 unsigned long long fact = 0;

void display( int a)
{
    printf("Ans is : %d",a);
}
int fact_value( int x)
{
    if(x==1)
    {
        return 1; //BaseCase;
    }
    else
    {
        return x * fact_value(x-1);
    }


}

int main ()
{
    // int fact=0;
    printf("input Number for Display the Factorial: ");
    scanf("%d",&fact);
    int ans=fact_value(fact);
    display(ans);
    getch();
    return 0;

}
