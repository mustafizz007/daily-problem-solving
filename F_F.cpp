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
   ll l ,r; cin >> l >> r;
   yes;
   for (ll i = l; i < r; i+=2){
    cout<< i << " "<<  i + 1<< endl; 
   }
}

int main ()
{
    opt();
    
        solve();
}
   