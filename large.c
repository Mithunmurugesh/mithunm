#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the values a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is the largest value");
}
else if(b>a&&b>c)
{
printf("b is the largest value");
}
else
{
printf("c is the largest value");
}getch();
}
