#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,a;
    clrscr();
    printf("enter the values n,m");
    scanf("%d",&n);
    scanf("%d",&m);
    a=n*m;
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}
