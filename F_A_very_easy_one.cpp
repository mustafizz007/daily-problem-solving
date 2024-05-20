#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   map<ll, ll>m;
   vector<ll>a;
   ll x;
   while (cin>>x)
   {
    //m[x]++;
    if (m[x] == 0) 
    {
        m[x]++;
        a.push_back(x);
    }
    else m[x]++;
   }
   for (auto i: a) cout<<i<<" "<<m[i]<<endl;
}

int main ()
{
    opt();
    
        solve();
    
}