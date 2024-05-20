#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   char a[n][n];
   for (int i=0; i<n; i++)
   {
    for(int j=0; j<n; j++)
    {
        cin>>a[i][j];
    }
   }
   for (int i=0; i<n; i++)
   {
    for (int j =0; j<n; j++)
    {
        if (a[i][j] == '1')
        {
            if (a[i][j-1] == '0' && a[i][j +1] == '0')
            {
                 cout<<"TRIANGLE"<<endl;
                 return;
            }
           
        }
    }
   }
   cout<<"SQUARE"<<endl;
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}