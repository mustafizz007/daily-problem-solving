#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   ll a[n], b[n];

ll mina =INT_MAX, minb = INT_MAX;

   for (ll i= 0; i<n; i++) cin>>a[i];
   for (ll i=0; i<n; i++) cin>>b[i];
   for (ll i=0; i<n; i++) 
   {
    mina = min(mina, a[i]);
    minb = min(minb, b[i]);
   }
   //cout<<mina<<" "<<minb<<endl;
   //cout<<endl;
    
ll ans=0;

   for(ll i=0; i<n; i++)
   {
    ans += max(a[i] - mina, b[i] - minb);
   }
   cout<<ans<<endl;
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