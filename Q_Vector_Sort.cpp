#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   vector<int> a(n);
   for (ll i=0; i<n; i++)cin>>a[i];
   sort(a.begin(), a.end());
   for (auto i: a) cout<<i<<" ";
}

int main ()
{
    opt();
   
        solve();
   
}