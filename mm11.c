#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum,pow;
    clrscr();
    printf("\n Enter  the number\n");
    scanf("%d",&n);
    printf("\n Enter the power\n");
    scanf("%d",&pow);
    sum=1;
    while(pow != 0)
    {
        sum=sum*n;
        --pow;
    }
    printf("%11d,sum");
    getch();
}
