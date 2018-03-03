#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    clrscr();
    printf("enre a and b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("values are %d,%d",a,b);
    getch();
}
