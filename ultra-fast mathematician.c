#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[102],b[102];

    scanf("%s",a);
    int n = strlen(a);
    scanf("%s",b);

    for(i=0; i<n; i++)
    {
        //scanf("%c",&a[i]);
        //scanf("%c",&b[i]);

        if (a[i]==b[i])
        {
            printf("0");
        }
        else printf("1");
    }
}
