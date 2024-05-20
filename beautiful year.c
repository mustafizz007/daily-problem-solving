#include<stdio.h>
int main()
{
    int yr,a,b,c,d,z;
    scanf("%d",&yr);

    while (1)
    {
        yr++;
        z = yr;
        a = yr%10;
        yr = yr/10;
        b = yr%10;
        yr = yr/10;
        c = yr%10;
        yr = yr/10;
        d = yr%10;

        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
        {
            printf("%d",z);
            break;
        }
        else
        {
            yr = z;
        }
    }
}
