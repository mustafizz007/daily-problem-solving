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

   string a;  cin >> a;
int cnt = 0;
   fr(i,n)
   {
    if ( a[i] == '1') cnt ++;
   }
   if (cnt == 2)
   {
    for(int i = 1; i< n; i++)
    {
        if (a[i] == '1' && a[i-1] == '1')
        {
            no;
            return;
        }
    }
   }
   if ( cnt % 2 != 0 )
   {
    no;
    return;
   }
   yes;


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