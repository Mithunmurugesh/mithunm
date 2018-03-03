#include<stdio.h>
#include<conio.h>
void main()
{
    int i=3,j=5;
    clrscr();
    printf("i=%d,j=%d",i,j);
    i=i^j;
    j=i^j;
    i=i^j;
    printf("i=%d,j=%d",i,j);
    getch();
}
