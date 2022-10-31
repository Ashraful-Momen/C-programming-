#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define name "Md.Ashraful Momen"
#define age 25

int *input()
{
    int x,y;
    printf("\nInput X:");
    scanf("%d",&x);
    printf("\nInput Y:");
    scanf("%d",&y);
    return &x,&y;
}
int  addition(int x,int y)
{
    return x+y;

}
int test(int a,int b)
{
    printf("\nX=%d and Y=%d",a,b);
}
int display(int a)
{
    printf("\nAns: %d",a);
}

