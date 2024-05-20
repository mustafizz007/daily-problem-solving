#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll n; cin>>n;
    ll a[n] ,b[n];
    ll s=0;

    for (ll i =0; i<n; i++) 
    {
        cin>>a[i];
        s+=a[i];
    }
    //cout<<s<<endl;
    for (ll i=0; i<n; i++) cin>>b[i];
    sort(b, b+n, greater<ll>());
    ll cnt = 2;
    for (ll i=0; i<n, cnt > 0; i++, cnt--)
    {
        s-= b[i];
        if (s <=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        //cout<<s<<" ";
       //cout<<cnt<<endl;
    }
    cout<<"NO"<<endl;

    

   
}

int main ()
{
   
        solve();
    
}