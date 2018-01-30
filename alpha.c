#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf("%c",&ch);
if(ch>'a'&&ch<'z')
{
printf("alphabet");
}
else
{
printf("not an alphabet");
}
getch();
}
