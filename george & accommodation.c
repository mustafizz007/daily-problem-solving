#include<stdio.h>
int main()
{
    int n,i,x,y,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &x,&y);
        int z = y-x;
        if (z>=2) count++;
    }
    printf("%d",count);


}
