#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);

        //x= a%b;
        if (a%b==0) printf("0\n");
        else printf("%lld\n",b-(a%b));
    }



}



