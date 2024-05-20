#include<stdio.h>
int main()
{
     int n,t;
     scanf("%d", &t);
     while(t--)
     {
        scanf("%d",&n);
        if (n%7==0 && n%2==0) printf("Alice\n");
        else if (n%9==0 && n%2!=0) printf("Bob\n");
        else printf("Charlie\n");
     }

    return 0;
}