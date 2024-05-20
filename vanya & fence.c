#include<stdio.h>
int main()
{
    int i,x,y,sum = 0;
    scanf("%d %d",&x,&y);
    int a[x];

    for (i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0; i<x; i++)
    {
        if (a[i]>y)
        {
            a[i]= 2;
        }
        else if (a[i]<=y)
        {
            a[i]= 1;
        }
        sum = sum + a[i];
    }
    printf("%d",sum);
}
