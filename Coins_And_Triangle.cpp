#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
  ll n; cin>>n;
  ll s =0;
  ll i =1;
  while (s <= n)
  {
    s += i;
    i++;
    //cout<<i<<" ";
  }
  cout<<i-2<<endl;
   
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