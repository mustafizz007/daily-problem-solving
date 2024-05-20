#include <stdio.h>
int main()
{
    int t, a[5], i, e = 0, d = 0, ind = 0;
    scanf("%d", &t);
    while (t--)
    {
        for (i = 0; i < 5; i++) scanf("%d", &a[i]);

        for (i = 0; i < 5; i++)
        {
            if (a[i] == 2) e++;
            else if (a[i] == 1)ind++;
        }
        if (ind == e) printf("DRAW\n");
        else if (ind > e) printf("INDIA\n");
        else printf("ENGLAND\n");
        ind=0,e=0;
    }
    return 0;
}