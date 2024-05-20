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
   int n; cin >> n;
   string a;
   cin >> a;

   map <string , int> m;

   for (int i =0; i<n-1; i++)
   {
    string sub = a.substr(i, 2);
    m[sub]++;
   }
  // for (auto i : m) cout << i.first << " "<< i.second << endl;
  int mx = INT16_MIN;
  for ( auto i : m){
    mx = max (mx , i.second);
  }
  for (auto i : m){
    if ( i.second == mx){
        cout << i.first <<endl;
        return;
    }
  }

}

int main ()
{
    opt();
   
        solve();
    
}