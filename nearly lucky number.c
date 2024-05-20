#include<stdio.h>
//#include<string.h>
int main()
{
    long long n;
    int count=0;
    scanf("%lld",&n);

    while (n!=0)
    {
        if (n % 10 == 7 || n%10 == 4)
        {
            count++;

        }
        n=n/10;
       //else n=n/10;
    }

    if (count==7 || count==4) printf("YES");
    else printf("NO");
}

/*{
    int i,count=0;
    char a[1000000000000000000];
    scanf("%s",a);
    int n = strlen(a);



   // for (i=0; i<n; i++)
    //{
    //    scanf("%d",&a[i]);
    //}
    for (i=0; i<n; i++)
    {
        if (a[i]=='4' || a[i]=='7') count++;
    }
    if (count ==4 || count ==7) printf("YES");
    else printf("NO");
}*/

