#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num;
    clrscr();
    scanf("%d",&num);
    n=num+1;
    while(n!=0)
    {
        if(n%10==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
    getch();
}
