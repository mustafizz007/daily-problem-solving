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
   int n , x, y;

   cin >> n >> x >> y;

   int a[n];

   for ( int i =0; i< n;i++) cin>>a[i];
   int cnt=0, cnt2=0;

   for (int i=0 ; i< n; i++)
   {
    int q , w ;
    q = a[i] * x;
  
    w = ( (a[i] + y -1) / y) * y;
 
   //cout<< q << " " << w <<endl;

    cnt += min (q, w);
   
   }
   cout<< cnt <<endl;
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