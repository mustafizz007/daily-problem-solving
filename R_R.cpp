#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n,m;
   cin>>n>>m;
   
   for (int i = n; i <= m; i++)
   {
    int f = 0;
    if (i == 1) f = 1;
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0) cout<<i<<endl;
   }
   cout<<endl;
   
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}