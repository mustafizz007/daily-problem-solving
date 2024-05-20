#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll  n, m, x, y, l;
   cin>>n>>m>>x>>y>>l;
   
   ll hor = ((x-1) / l) + ( (n - x) / l) + 1;
   ll ver = ((y-1) / l) + ((m - y) / l) + 1;

   cout<<hor*ver<<endl;
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