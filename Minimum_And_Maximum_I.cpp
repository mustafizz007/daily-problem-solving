#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;

   ll cnt =0;

   if ( n% 2 == 0)
   {
    ll x = n /2;

    cnt = (x * (x+1));
   }
   else
   {
    ll x = ceil(double (n) / 2);
    //cout<<x<<endl;
    ll xx = x -1;

    cnt = (xx * (xx +1));
    cnt += x;
   }
   cout<<cnt<<endl;
  
}

int main ()
{
    ll t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}