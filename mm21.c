#include<stdio.h>
#include<conio.h>
int main()
{
	int d,n,f,a=0,sum=0,c=0;
  clrscr();
	scanf("%d",&n);
	scanf("%d",&d);
	scanf("%d",&f);
	if(n>=0&&f>=0)
	{
		for(i=0;i<n;i++)
		{
		a=a+d;
		sum=sum+a;
		}
		printf("%d",sum);
	}
	else
	{
		printf("%d",c);
	}
	getch();
}
