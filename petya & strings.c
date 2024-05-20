#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    int i,j;
    char a[105],b[105];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        a[i]=toupper(a[i]);
    }
    for (j=0;j<strlen(b);j++)
    {
        b[j]=toupper(b[j]);
    }
    int d = strcmp(a,b);
    printf("%d",d);



}
