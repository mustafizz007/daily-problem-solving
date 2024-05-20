#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll q; cin>>q;
   set<ll>ss;
   while (q--)
   {
    ll y , x; cin>>y>>x;
    if (y == 1)
    {
        ss.insert(x);
    }
    else if (y == 2)
    {
        ss.erase(x);

    }
    else 
    {
        if (ss.find(x) != ss.end())
        {
            cout<<"Yes"<<endl;
           
        }
        else cout<<"No"<<endl;
    }
    
   }
}

int main ()
{
    opt();
   
        solve();

}