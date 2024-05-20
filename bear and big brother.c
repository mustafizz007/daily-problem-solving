#include<stdio.h>
int main()
{
    int x,y,i=0;
    scanf("%d %d",&x,&y);
    while (++i)
    {
        x = x * 3;
        y = y * 2;

        if (x>y) break;
        else continue;
    }
    printf("%d",i);
}
