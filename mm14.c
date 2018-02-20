#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
getch();
}
