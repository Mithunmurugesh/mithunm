#include<stdio.h>
#include<conio.h>
void main()
{
char s[200];
int count=0,i,n;
clrscr();
scanf("%[^\n]s",s);
n=strlen(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
count++;
}
printf("%d",count);
getch();
}
