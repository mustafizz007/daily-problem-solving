#include <stdio.h>
int main()
{
    int n, k, t=0, i, c = 0;
    
    scanf("%d %d", &n, &k);

    for (i=1; i<=n; i++)
    {
        t = t + (5 * i);
        if (t > (240 - k)) break;
        c++;
    }
    
    printf("%d", c);

    return 0;
}
