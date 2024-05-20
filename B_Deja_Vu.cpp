#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
    ll n, q;
    cin>>n>>q;

    ll a[n], x[q];
    for (ll i=0; i<n; i++) cin>>a[i];
    for (ll i=0; i<q; i++) cin>>x[i];
set <int> y;
    for (ll i=0; i<q; i++)
    {
        if (y.count(x[i]) >=1 ) continue;
        else y.insert(x[i]); 
        
        for (ll j=0; j<n; j++)
        {
            
            if(a[j] % (1LL << x[i]) == 0) 
            {
                ll d = x[i]-1; 
                a[j] += (1LL << d);
            }
            // if(a[i] %  (pow(2, x[i])) == 0)
            // {
            //     a[i] += pow(2, x[j--]);
            // }
        }
    }
    for (ll i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    

   
}

int main ()
{
    opt();
    ll t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}