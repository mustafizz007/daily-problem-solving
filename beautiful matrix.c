#include<stdio.h>
int main()
{
    int i,j,z;
    int c[6][6];

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&c[i][j]);

            if(c[i][j]==1)
            {
                //int x= i;
                //int y= j;

                int a = 3-i;
                int b = 3-j;


                if ( a>=0 && b>=0)
                {
                    z= a+b;
                }
                if (a<0)
                {
                    a = a*(-1);
                }
                if (b<0)
                {
                    b = b*(-1);
                }


                z = a+b;
            }
        }
    }
    printf("%d",z);


}




