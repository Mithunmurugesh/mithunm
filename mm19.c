#include<stdio.h>
#include<conio.h>
void main()
{
  int n,fact=1,i=1;
  clrscr();
  scanf("%d",&n);
  while(i<=n)
  {
      fact=fact*i;
      i++;
  }
  printf("%d",fact);
  getch();
}
