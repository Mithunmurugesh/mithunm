#include<stdio.h>
#include<conio.h>
void main()
{
int a[1000],i,j,t,lim;
clrscr();
printf("enter the limit:");
scanf("%d",&lim);
printf("\n enter the series:");
for(i=0;i<lim;i++)
scanf("%d",&a[i]);
for(i=0;i<lim;i++)
{
for(j=0;j<lim;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
printf("\n the result is :%d\t",a[lim%2]);
getch();
}
