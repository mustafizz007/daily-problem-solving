#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   ll a[n];
   for (ll i=0; i<n; i++) cin>>a[i];

   stack<ll> ss;
   vector<ll> ans;

   for (int i=n-1; i>=0; i++)
   {
    while(!ss.empty())
    if (ss.top() <= a[i])
    {
        ans[i] = -1;
        ss.pop();
    }
   }
}

int main ()
{
    
        solve();
  
}