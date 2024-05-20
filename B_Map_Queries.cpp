#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll q ; cin>>q;

   map<string , ll> m;

   while (q--)
   {

    ll x; cin>>x;
    string a; cin>>a;
    
    if ( x == 1)
    {
       
        ll y; cin>>y;

        if (m.find(a) != m.end()) m[a] += y;      
        else  m[a] = y;

    }
    
    else if( x == 2)  m.erase(a);

    else
    {
        if (m.find(a) != m.end()) cout<<m[a]<<endl;
        else cout<<0<<endl;
    }
   }
   
}

int main ()
{
    opt();
   
        solve();
   
}