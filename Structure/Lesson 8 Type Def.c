#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct book
{
    char BookName[30];
    int price ;
};
int main()
{
    typedef char Letter[];
     Letter name="Md.Ashraful Momen";
     fflush(stdin);
     printf("The letter is : %s",name);

    typedef struct book Book;
    Book Object1={"C Programming ",300};
    printf("\nBook Name: %s and Price : %d",Object1.BookName,Object1.price);
    getch();
    return 0;
}
