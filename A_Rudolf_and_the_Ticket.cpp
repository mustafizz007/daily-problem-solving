#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   int n, m, k;
   cin>>n>>m>>k;
   int a[n], b[m];
   for (int i=0; i<n; i++) cin>>a[i];
   for (int i=0; i<m; i++) cin>>b[i];
ll cnt =0;
   for(int i=0; i<n; i++)
   {
    for (int j=0; j<m; j++)
    {
        if ((a[i] + b[j]) <= k) cnt++;
    }
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