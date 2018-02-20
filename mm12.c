#include<stdio.h>
#include<conio.h>
void main()
{
   int n,num,rem,rev=0;
   clrscr();
   scanf("%d",&n);
   num=n;
   while(n!=0)
   {
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;

   }
   if(rev==num)
	printf("Yes");	
   else
	printf("No");
getch();
}
