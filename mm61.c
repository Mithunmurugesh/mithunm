#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,num;
    clrscr();
    scanf("%s",&a);
    scanf("%d",&num);
    n=strlen(a);
    for(i=0;i<num;i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
