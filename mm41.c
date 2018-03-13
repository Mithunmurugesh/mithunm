#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c;
char a[20];
clrscr();
printf("Enter the string");
scanf("%s",&a);
printf("Enter n value");
scanf("%d",&n);
while(i<n)
{
printf("%S\n",a[i]);
c++;
}
getch();
}
