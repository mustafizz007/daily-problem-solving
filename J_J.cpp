#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   cout<<( (n  % 1000000007) * (n % 1000000007) ) % 1000000007 <<endl;
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