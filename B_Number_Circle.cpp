#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   ll a[n];
   for(ll i=0; i<n; i++) cin>>a[i];
   sort(a, a+n);
   ll mx = *max_element(a, a+n);
   if ( (a[n-2] + a[n-3]) <= mx) 
   {
    cout<<"NO"<<endl;
    return;
   }
   cout<<"YES"<<endl;
   cout<<a[n-1]<<" ";
   for (ll i = n-3; i>=0; i--) cout<<a[i]<<" ";
   cout<<a[n-2]<<endl;
   
}

int main ()
{
   
        solve();
   
}