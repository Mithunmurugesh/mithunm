#include<stdio.h>
#include<conio.h>
void main()
{
    char s[200];
    int count = 0,i,n,ans;
    clrscr();
    scanf("%[^\n]s", s);
    n=strlen(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("%d",count);
   getch();
}
