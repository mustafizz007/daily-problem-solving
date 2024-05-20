#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n; cin>>n;
    ll x = log2(n);
    cout<<int(pow(2, x))<<endl;
}

int main ()
{
    ll t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}