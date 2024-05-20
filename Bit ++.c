#include<stdio.h>
int main()
{
    int n,i,x=0;
    char a[5];

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%s",&a);

        if (a[1] == '+')
        {
            x++;
        }
        else if (a[1] == '-')
        {
            x--;
        }

    }
    printf("%d\n",x);
}
