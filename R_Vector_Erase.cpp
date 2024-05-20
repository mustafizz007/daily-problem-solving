#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   vector<int>a(n);
   for (int i=0; i<n; i++) cin>>a[i];
   ll x; cin>>x;
   a.erase(a.begin()+(x-1));
   ll s, b; cin>>s>>b;
   a.erase(a.begin()+(s-1), a.begin()+(b-1));
   cout<<a.size()<<endl;
   for (auto i: a)cout<<i<<" ";
}

int main ()
{
    opt();
    
        solve();
   
}