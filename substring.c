#include<stdio.h>
int main()
{
    int in,len,i,j;
    char a[100],b[100];
    gets(a);
    scanf("%d%d",&in,&len);

    int x = in + len;

    for (i=in-1; i<x-1; i++)
    {
        for (j=0; j<len; j++)
        {
            b[j] = a[i];
            i++;
        }
    }
    for (j=0; j<len; j++)
    {
        printf("%c",b[j]);
    }
}
