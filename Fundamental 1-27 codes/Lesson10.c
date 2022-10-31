#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int num1,num2;
    printf("Enter the Tow Digit: ");
    scanf("%d%d",&num1,&num2);
    printf("Your Enterd number is : %d and %d \n",num1,num2);
    if (num1>num2)
    {
        printf("Number : %d is Big",num1);
    }
    else if (num2>num1)
    {
        printf("Number : %d is big",num2);
    }
    else if(num1==num2)
    {
        printf("Both are Equal ");
    }
    else 
    {
        printf("Input is invalid ");
    }
    return 0;
}