#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char a[1000];
    gets(a);

    for (i=0;i<strlen(a);i++)

    {
        if (a[0]>='a'  && a[0]<='z')
        {
            a[0]=toupper(a[0]);
        }
    }
    printf("%s",a);
}
