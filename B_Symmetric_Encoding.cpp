#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
    ll x; cin >> x;

    string a, b; cin >> a;

    b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    map<char, char> m1, m2;

    for (int i =0; i<= b.size() /2; i++)
    {
       
        m1.insert(make_pair( b[b.size() - i - 1] , b[i]));
        m1.insert(make_pair(b[i], b[b.size() - i - 1]));
    }


// for(auto i : m1) cout << i.first << " " << i.second << endl ;
// cout << endl;

    for (int i =0; i < a.size(); i++)
    {
        a[i] = m1[a[i]];
    }

    cout << a << endl;



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