#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//Find the Triangle Value :
double pi=3.1416;
void display(double a)
{
    printf("The Ans is : %0.2lf",a);
}
int Triangle(double b,double h)
{
    //printf("The Area of Triangle is :%0.2lf",b*h*pi);
    return b*h*pi;

}
int main ()
{
    double base=0,height=0;
    printf("Input the base and height for Triangle Area: ");
    scanf("%lf%lf",&base,&height);
    double ans =Triangle(base,height);
    display(ans);
    getch();


    return 0;
}
