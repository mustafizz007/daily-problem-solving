#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,x=0,count=0;
    char a[105];
    scanf("%s",a);
    n= strlen(a);
    for (i=0; i<n; i++)
    {
        for (j=i-1; j>=0; j--)
        {
            if (a[i]==a[j])
            {
                x=1;
                break;
            }

        }
        if (x==0)
        {
            count++;
        }
        x=0;


    }
    //printf("%d",count);

    if (count%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

}
