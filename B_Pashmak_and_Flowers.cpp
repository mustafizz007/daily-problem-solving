#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   ll b[n];
   map<ll, ll> m;
   for (ll i=0; i<n; i++) 
   {
    cin>>b[i];
    m[b[i]]++;
   }
   ll x, y;
   ll mx = *max_element(b, b+n);
   ll mn = *min_element(b, b+n);

   for (auto i: m)
   {
    if(i.first == mx)
    {
        x  = i.second;
    }
    if (i.first == mn) y = i.second;
   }
   if (mx == mn) 
   {
    cout<<(mx - mn)<<" "<<(n * (n-1)) / 2<<endl;
   }
   else cout<<(mx-mn)<<" "<<x * y<<endl;


}

int main ()
{
    opt();
   
        solve();
   
}