#include<stdio.h>
int main()
{
    long long int n,x;

    scanf("%lld",&n);

    if (n%2==0)
    {
        printf("%lld",n/2);
    }
    else
    {
        x=  -(n/2 + 1 );
        printf("%lld",x);
    }
}
