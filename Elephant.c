#include<stdio.h>
int main()
{
    long x,n;
    scanf("%ld",&x);

    n = x/5;

    if (x%5==0) printf("%ld",n);
    else printf("%ld",n+1);
    return 0;


}
