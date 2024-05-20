#include<stdio.h>
int main()
{
    int i,a,b,n,p=0,m=0;
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);

        p= b-a+p;

        if (p>m)
        {
            m=p;
        }
        //p= p-x+y;

        //printf("%d\n",p);

    }
    printf("%d",m);

    /*
    i=0;

    while (i<n)
    {
        p= p+(y-x);
        //i++;
        p= (p-x)+y;
        //i++;

        printf("%d\n",p);

    }
    //printf("%d\n",p);
}*/

}
