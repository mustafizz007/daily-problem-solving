#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char a[n][100];

    for (i=0;i<n;i++)
    {
        scanf("%s",&a[i]);

        int l = strlen (a[i]);

        if (l>10)
        {
            int x= l-2;

            printf("%c%d%c\n",a[i][0],x,a[i][l-1]);
        }
        else printf("%s\n",a[i]);
    }

}
