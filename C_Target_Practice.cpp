#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int p =0;
        char a[10][10];
        for (int i=0; i<10; i++)
        {
            for (int j=0; j<10; j++)
            {
                cin>>a[i][j];
            }
        }
        for (int i=0; i<10; i++)
        {
           // cout<<p<<endl;
            for (int j=0; j<10; j++)
            {
                
                if (i==0 || i == 9 || j ==0 || j == 9) 
                {
                    if (a[i][j] == 'X')
                    {
                        p+=1;
                    }
                }
               
                else if (i == 1 || i==8  && j >= 1 && j<=8)
                {
                     if (a[i][j] == 'X')
                    {
                        p+=2;
                    }

                }
                else if ( j ==1 || j == 8 && i >= 2 && i <= 7)
                {
                      if (a[i][j] == 'X')
                    {
                        p+=2;
                    }

                }
                else if (i == 2 || i==7 && j >= 2&& j <= 7)
                {
                     if (a[i][j] == 'X')
                    {
                        p+=3;
                    }

                }
                else if (j == 2 || j == 7 && i >= 3 && i <= 6)
                {
                      if (a[i][j] == 'X')
                    {
                        p+=3;
                    }

                }
                else if (i == 3 || i== 6 && j>=3 && j<= 6)
                {
                       if (a[i][j] == 'X')
                    {
                        p+=4;
                    }

                }
                else if ( j ==3 || j == 6 && i >= 4 && i <= 5)
                {
                        if (a[i][j] == 'X')
                    {
                        p+=4;
                    }
                }
                else if (i==4 || i==5 || j==4 || j==5)
                {
                       if (a[i][j] == 'X')
                    {
                        p+=5;
                    }

                }
            }
        }
        cout<<p<<endl;
    }
}