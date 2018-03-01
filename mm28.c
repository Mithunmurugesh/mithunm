#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[10];
clrscr();
printf("enter the n value);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the a value");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t%d\n",a[i],i);
}
getch();
}
