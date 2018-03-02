#include <stdio.h>
#include<conio.h>
void main() 
{
	char a[100];
	int n,i,count=1;
  clrscr();
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]==' ')
	    {
	        count++;
	    }
	}
	printf("%d",count);
	getch();
}
