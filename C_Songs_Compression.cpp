#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
    ll n, m;
    cin>>n>>m;
    
    ll f =0, k =0;

    ll b[n];

    for ( ll i = 0; i < n; i++ )
    {
        ll x, y;
        cin>>x>>y;

        f += x;

        k += y;

        b[i] = x - y;
    }

    if (f <= m){
        cout<<0<<endl;
        return;
    }
    
    //cout<<f<<endl;

    sort (b, b + n, greater<int>());

    ll cnt = 0;

    for (ll i = 0; i < n; i++ )
    {
        f -= b[i];
        cnt++;


        // cout<<f<<" ";

        if ( f <= m ) break;
    }
    // cout<<endl;
    
    ( k > m ) ? cout<<-1<<endl : cout<<cnt<<endl;
   
}

int main ()
{
    opt();
    
        solve();
  
}