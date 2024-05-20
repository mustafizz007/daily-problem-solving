#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
    vector<ll> v = {};
    ll q; cin>>q;
    while(q--)
    {
        char a;
        ll b;
        cin>>a;
        if(a == '0')
        {
            cin>>b;
            v.push_back(b);
        }
        else if (a == '1')
        {
            cin>>b;
            cout<<v[b]<<endl;
        }
        else if (a == '2')
        {
            v.pop_back();
        }
        //for (auto i : v) cout<<i<<" ";

    }
    
   
}

int main ()
{
    opt();
   
        solve();
 
}