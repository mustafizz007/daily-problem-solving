#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

bool sorted(string a)
{
    for (int i=1; i< a.size(); i++)
    {
        if (a[i] < a[i-1]) return false;
    }
    return true;
}

void solve ()
{
    string a; cin>>a;

    if (sorted(a)){
        cout << 0 << endl;
        return;
    }

    vector<ll>on = {};
    vector<ll> ze = {};

    for (int i =0; i< a.size(); i++)
    {
        if (a[i] == '1') { on.push_back(i+1); }
        else if(a[i] == '0'){ze.push_back(i+1);}
    }

   // ll x = 0;
    //if(on.size()) 
    ll x = on[0];
    // cout << x << endl;
    ll cnt =0;

    for (int i =0 ; i< ze.size(); i++)
    {
        if (ze[i] < x) continue;

        cnt += ze[i] - x + 1;
        x++;
    }
   cout <<cnt <<endl;


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