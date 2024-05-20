#include<stdio.h>
int main()
{
    int i,sum=0,k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int a[w];

    for (i=1; i<=w; i++)
    {
        a[i] = k*i;
    }

    for (i=1; i<=w; i++)
    {
        sum = sum + a[i];
    }

    if (sum>n) printf("%d", sum - n);
    else printf("0");


}
