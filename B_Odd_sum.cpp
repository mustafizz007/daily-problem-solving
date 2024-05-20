#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) cin>>a[i];
    ll e =INT64_MIN, o=INT64_MIN;
    for (ll i=0; i<n; i++)
    {
        if (a[i] % 2) 
        {
            e = max(e, a[i]);
        }
        else{
            o = max (o, a[i]);
        }
        //cout<<e<<" "<<o<<endl;
    } 
    if (e == INT64_MIN) e =0;
    if (o == INT64_MIN) o =0;
    cout<<e+o<<endl; 
}

int main ()
{
    
        solve();
}