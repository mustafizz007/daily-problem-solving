#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n, x; cin>>n>>x;
   ll a[n];
   for (ll i=0; i<n; i++) cin>>a[i];
   sort(a, a+n);
   ll cnt=0;
   for (auto i : a)
   {
    if (x != 1)
    {
         cnt += i * x;
    x --;
    }
    else cnt += i;
   }
   cout<<cnt<<endl;
   
}

int main ()
{
    opt();
    
        solve();
    
}