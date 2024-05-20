#include<stdio.h>
int main()
{
     int n,k,c=0;
     scanf("%d %d", &n, &k);
     while (k--)
     {
        if (n%10==0) 
        {
            n = n/10;
            
        }
        else 
        {
            n = n -1;
        }
     }
     printf("%d",n);
    return 0;
}