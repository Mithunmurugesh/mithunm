#include<stdio.h>
#include<conio.h>
void main() 
{
int a;
clrscr();
printf("enter the n value ");
scanf("%d",&a);
if((a/60)==1)
{
printf("%d hr",a/60);
}
else
{
printf("%d hrs",a/60);
}
if((a%60)==1)
{
printf("%d hr",a%60);
}
else
{
printf("%d hrs",a%60);
}
getch();
}
