#include<stdio.h>
int main()
{

    int i,n;
    float sum = 0;
    scanf("%d",&n);
    float a[n];
    for (i=0; i<n; i++)
    {
        scanf("%f",&a[i]);

        a[i] = a[i]/100;
        //printf("%f",a[i]);
       sum = sum + a[i];
    }
    printf("%f",sum/n*100);
}


