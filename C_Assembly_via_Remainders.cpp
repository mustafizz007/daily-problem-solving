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
   ll n; cin >> n;

   ll a[n-1];
   fr(i, n-1) cin >>a[i];


   ll cnt = a[0] + 1;


   if (cnt % 2 == 0) cnt  ++;
//    else cnt ++;

   cout << cnt  << " ";

   for (ll i =0; i<n-1; i++){
    cnt+=a[i];
    cout << cnt <<" ";
   }
   cout <<endl;
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