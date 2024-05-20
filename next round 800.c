#include<stdio.h>
int main()
{
    int n,k,i,x=0;
    scanf("%d %d",&n,&k);
    int a[n];

    for (i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=1; i<=n; i++)
    {
        if (a[i]<=0) continue;

        else if (a[i]>=a[k]) x++;
    }

    printf("%d\n",x);
}
