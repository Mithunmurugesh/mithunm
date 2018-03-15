#include<stdio.h>
#include<conio.h>
void main() 
{
	int n,temp,a,b,c,d,sum=0;
  clrscr();
	scanf("%d",&n);
	temp=n;
	if(temp!=0)
	{
		a=temp/100;
		b=temp%100;
		c=b/10;
		d=b%10;
		sum=a+c+d;
	}
	printf("%d",sum);
	
	getch();
  }
