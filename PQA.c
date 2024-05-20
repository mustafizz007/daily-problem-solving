#include<stdio.h>
int main()
{
    long long t,j,l;
    scanf("%lld",&t);
    for (j=1; j<=t; j++)
    {
        long long i,n,k,x=0,max;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        long long sum = 0;
        for (i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum = sum + a[i];
        }
        max = a[0];
        for (i=0; i<n; i++)
        {
            if (a[i]>max) max = a[i];
        }
        if (k>2)
        {
            for (l=2; l<k; l++)
            {
                max = max * l;
            }
        }
        if (k==1) printf("Case %lld: %lld",j,sum);
        else printf("Case %lld: %lld",j,sum + max);
       /* int x = (sum * k) - (n*2);
        if (n%2==0) printf("Case %d: %d",j,x+2);
        else printf("Case %d: %d",j,x-1);*/
    }
}
