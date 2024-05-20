#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if (i==1)   printf("I hate ");
        else
        {
            if (i%2!=0)printf("that I hate ");
            else printf("that I love ");
            //printf("that ");
        }
    }
    printf("it");

}
