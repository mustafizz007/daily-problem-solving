#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,x,i;
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
                printf("0\n");
                break;
            }
            else if (a[i]=='L' && a[i+1]=='R')
            {
                printf("%d\n",i);
                break;
            }
            else //if (a[i]!='R' && a[i+1]!='L' || a[i]!='L' && a[i+1]!='R')
            {
                printf("-1\n");
                break;
            }


        }
    }

}

