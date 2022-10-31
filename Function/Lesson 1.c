#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Function for adding 2 Numbers:
int add(int x,int y)
{
    return x+y;
}
int main ()
{
    int Number1,Number2;
    printf("Enter Tow Integer : ");
    scanf("%d%d",&Number1,&Number2);
    //scanf("%d",Number1,Number2);
    int sum = add(Number1,Number2);
    printf("\nAdding Ans: %d",sum);


    return 0;
}
