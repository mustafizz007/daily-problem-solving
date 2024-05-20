#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll cnt =0;
   ll n; cin>>n;
   set<ll> ss;
   while (n--)
   {
    int x; cin>>x;
    ss.insert(x);
   }
   while(!ss.empty())
   {
   
    int m = *ss.rbegin();
    ss.erase(m);
    if (m % 2 ==0)
    {
        cnt++;
        ss.insert(m /2);

    }
  
   }
   cout<<cnt<<endl;
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