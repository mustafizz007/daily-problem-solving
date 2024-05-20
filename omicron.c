#include<stdio.h>
int main()
{
    int t,i,k=2,j,x,y;
    scanf("%d",&t);
    for (i=1; i<=t; i++)
    {
        int a[3];
        for (j=1; j<=3; j++)
        {
            scanf("%d",&a[j]);
        }
        int max = a[1];
        for (j=1; j<=3; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                x = j;
            }
        }
        int min = a[1];
        for (j=1; j<=3; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                y = j;
            }
        }
        a[x] = a[x] - k;
        a[y] = a[y] + k;
        int count =0;
        for (j=1; j<=3; j++)
        {
           if (a[j] == a[j+1]) count++;
        }
        if (count==2) printf("Case %d: Peaceful",i);
        else printf("Case %d: Fight",i);
    }
}
