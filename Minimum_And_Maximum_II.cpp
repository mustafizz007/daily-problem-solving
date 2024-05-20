#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   
   ll cnt =0;

   cnt += n*2;
   ll x = n-1;
   cnt += (x*(x+1)) /2;
   cout<<cnt-1<<endl;
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