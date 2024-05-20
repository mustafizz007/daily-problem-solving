#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        for (i=1; i<=n; i++)
        {
            if (a[i]=='R' && a[i+1]=='L')
            {
                printf("0");
                break;
            }
            else if (a[i]=='L' && a[i+1]=='R')
            {
                printf("%d",i);
                break;
            }

            else if (a[i]==a[i+1])
            {
                printf("-1");
                break;
            }

        }
    }
}

