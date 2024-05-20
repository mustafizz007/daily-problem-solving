#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
    ll x, y; cin >> x >> y;

    ll p =  (y / 2);

    ll pp =  ( (y/2) + ((y % 2) != 0) ) - p;

    ll one = ( p * 7 ) + ( pp * 11 );
    ll ans =0;

    if (one < x)
    {
        x = x - one;
        ans += (x/15) + ((x % 15) !=0);
    }
    cout << ans + p + pp << endl;

    
   
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}