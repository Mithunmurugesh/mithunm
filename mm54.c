#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter n values");
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else
{
printf("%d",n-1);
}
getch();
}
