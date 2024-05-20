#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==1)
        {
            x++;
        }
    }
    if (x>0) printf("HARD");
    else printf("EASY");
}
