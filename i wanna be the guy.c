#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char b[n*2];

    gets(b);

    char c[n];
    gets(c);
    strcat(b,c);
   // int x = strlen(b);

    //int y = strlen(c);
    //int z = x+y;

    printf("%s", b);















    /*int n,p,i,j;
    scanf("%d",&n);
    int a[n];
    for (i=1; i<=n; i++)
    {
        a[i]=i;
    }

    scanf("%s",&b);
    scanf("%s")

    //char b[p],c[p];
    for (j=1;j<=p;j++)
    {
        scanf("%c",&b[j]);
        //scanf("%c",&c[j]);
    }
    for (j=1;)*/
}
