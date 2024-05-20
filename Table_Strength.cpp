#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   vector<int> a(n);
   for (ll i=0; i<n; i++) cin>>a[i];
   sort(a.begin(), a.end(), greater<int>());
ll cnt=0;
   for (ll i=0; i<n; i++)
   {
    ll x = a[i];
    cnt = max(cnt, x*(i+1));
   }
   cout<<cnt<<endl;


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