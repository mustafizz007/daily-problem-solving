#include<stdio.h>
int main()
{
    long int n;
    int i,k;
    scanf("%ld %d",&n,&k);


    for (i=1; i<=k; i++)
    {
        if(n%10!=0)
        {
            n=n-1;
        }
        else n=n/10;
    }
    printf("%d",n);

}
