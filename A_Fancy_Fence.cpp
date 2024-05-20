#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n;
    cin>>n;

    (n == 90 or n == 60) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    //(360 % (180 - n) == 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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