#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   ll a[n];
   ll ans = 1;
   for (ll i=0; i<n; i++) 
   {
    cin>>a[i];
    ans *= a[i];
   }
   ans += (n-1);
   cout<<2022*ans<<endl;
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