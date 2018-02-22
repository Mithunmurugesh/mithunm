#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,i,temp1,temp2,rem,n=0,result=0,=0;
    clrscr();
    scanf("%d %d", &a, &b);
    if(a<=-1&&b<=-1)
    {
    	printf("%d",c);
    }
    else
    {
    for(i=a+1;i<b;i++)
    {
        temp2=i;
        temp1=i;
        while(temp1!=0)
        {
            temp1/=10;
            ++n;
        }
        while(temp2!=0)
        {
            rem=temp2%10;
            result+=pow(rem,n);
            temp2/=10;
        }
        if(result==i) 
        {
            printf("%d",i);
        }
        n=0;
        result=0;
    }
   }
   getch();
}
