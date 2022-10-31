#include <stdio.h>
// Farenhit F=(C*1.8)+32
int main ()
{
    float F=0,C;
    printf("Input The Celcious value: ");
    scanf("%f",&C);
    F = (C*1.8)+32;
    printf("The Farhrenheit is : %0.2f",F);

    
    return 0;
}