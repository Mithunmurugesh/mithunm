#include<stdio.h>
#includeconio.h>
void main()
{
 int n,a[100],i,sum=0,b=0;
 clrscr();
 scanf("%d",&n);
 if(n>0)
 {
 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	i=sum/n;
	printf("%d",i);
}
else
printf("%d",b);
getch();
}
