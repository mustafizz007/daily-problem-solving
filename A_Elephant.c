#include<stdio.h>
int main()
{
     int n,x,y,z,a,b;
     scanf("%d", &n);
     while (n!=0)
     {
        x = n/5;
        n = n - (x*5);
        y = n/4;
        n = n - (y*4);
        z = n/3;
        n = n - (z*3);
        a = n/2;
        n = n - (a*2);
        b = n/1;
        n = n - (b*1);
     }
     printf("%d",x+y+z+a+b);
    return 0;
}