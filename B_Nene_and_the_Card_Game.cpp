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
   int n; cin>>n;
   int a[n];
   map<int, int> m;
   for (int i=0; i<n; i++){
    cin>>a[i];
    m[a[i]]++;
   }
   int cnt =0;
   for(auto i: m){
    if (i.second == 2) cnt++;
   }
   cout<<cnt<<endl;

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