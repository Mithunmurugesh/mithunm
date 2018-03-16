#include<stdio.h>
#include<conio.h.
void main()
{
    int a,b;
    clrscr();
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swapping a=%d b=%d",a,b);
    (a^=b),(b^=a),(a^=b);
    printf("\nValues after swapping a=%d b=%d",a,b);
    getch();
}
