#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    printf("Enter any Number : ");
    float num;
    scanf("%f",&num);
    float absulate= abs(num);
    float celing_point = ceil(num);
    float floor_point = floor(num);
    printf("\nThe Absulate value is : %0.2f",absulate);
    printf("\nThe Ceiling  value is : %0.2f",celing_point);
    printf("\nThe F value is : %0.2f",floor_point);
    printf("\nThe pow Function is :%0.2f",pow(5,2)); //pow(Base,Exponent)
    printf("\n The Squre root is : %0.2f",sqrt(25));

    return 0;
}