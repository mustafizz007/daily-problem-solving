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
   int n, m; cin >> n >> m;
int cnt =0;
int mx = max(n, m);
int mn = min(n, m);

   for (int i =2; i<=mx; i+=2 )
   {
    for (int j =1; j<=mn; j++)
    {
        if (  (i+j) % (j * __gcd(i, j))  == 0) cnt++;
        //else i++;
    }
   }

   //for (int i = )
   cout << cnt << endl;
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