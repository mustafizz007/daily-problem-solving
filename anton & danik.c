#include<stdio.h>
int main()
{
    int n,i,x=0,y=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for (i=0; i<n; i++)
    {
        if (a[i]=='A') x++;
        else if (a[i]=='D') y++;
    }
    if (x>y)printf("Anton");
    else if (x==y) printf("Friendship");
    else printf("Danik");
}
