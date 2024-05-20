#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x;
    char a[105];
    gets(a);
    int n = strlen(a);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n-1; j++)
        {
            if (a[j]>a[j+2])
            {
                x=a[j];
                a[j]=a[j+2];
                a[j+2]=x;

            }
        }
    }
    for (i=0; i<n; i++)
    {
        a[1]='+';
        printf("%c",a[i]);
    }

}


