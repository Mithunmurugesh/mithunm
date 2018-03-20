#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a=1,b=1,c;
    clrscr();
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    getch();
}
