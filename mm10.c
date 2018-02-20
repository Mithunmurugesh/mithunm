#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int count=0;
  clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("\n%d",count);
  getch();
}
