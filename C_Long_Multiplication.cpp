#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
    // ll x, y;
    // cin>>x>>y;

    // string a = to_string(x);
    // string b = to_string(y);
    string a, b;
    cin>>a>>b;
    ll n = a.size();

    ll z = 0;
    for (ll i =0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            z = i;
            break;
        }
    }

    for (ll i = 0; i < z ; i++) cout<<a[i];

    cout<<max(a[z], b[z]);

    for (ll i = z +1; i < n; i++) cout<<min(a[i], b[i]);
    
    cout<<endl;

    for (ll i = 0; i < z; i++) cout<<b[i];

    cout<<min(a[z], b[z]);

    for (ll i = z + 1; i < n; i++) cout<<max(a[i] , b[i]);
    cout<<endl;





   

}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}