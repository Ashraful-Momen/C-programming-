#include <stdio.h>
#include <string.h>
#include <conio.h>
//Character Types of Array is define as String
//For String The Last Value keep as null ;
int main ()
{
    char shuvo[6];
    shuvo[0]='s';
    shuvo[1]='h';
    shuvo[2]='u';
    shuvo[3]='v';
    shuvo[4]='o';
    shuvo[5]='\n';
    printf("%s \n",shuvo);


    char Name[]="Md.Ashraful \
    Momen";
    printf("\nName : %s\n",Name);
    char num[]= {'1','2','3'};
    printf("\nNumber : %s \n",num);



    getch();
    return 0;
}
