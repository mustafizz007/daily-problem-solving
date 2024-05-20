#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (ll i =0; i<n ; i++) cin>>a[i];
   int mx = *max_element(a, a+n);
   //cout<<mx<<endl;
   if (mx <= 25) cout<<0<<endl;
   else cout<<mx -25<<endl;
}

int main ()
{
    solve();   
}