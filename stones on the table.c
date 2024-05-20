#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    char a[n+2];

    scanf("%s",a);

    for (i=0; i<n-1; i++)
    {

        if (a[i]==a[i+1])
        {
            count++;
        }

    }

    printf("%d",count);
}
