#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,x=0,y=0;
    char a[100];
    gets(a);
    for (i=0; i<strlen(a); i++)
    {
        if (a[i]>='a' && a[i]<='z') x++;
        else if (a[i]>='A' && a[i]<='Z') y++;


    }
    for (i=0;i<strlen(a);i++)
    {
         if (x>y) printf("%c",tolower(a[i]));
        else if (x==y) printf("%c",tolower(a[i]));
        else printf("%c",toupper(a[i]));
    }


}
