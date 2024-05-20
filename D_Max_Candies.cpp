#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   int n,k;
   cin>>n>>k;

   int a[n+5];

   for(int i=1; i<=n; i++) cin>>a[i];
   int ans =0;
   int i,j;
   for (int i=1; i<=n-k+1; i++)
   {
    ans =0;
    for (int j =i; j<=i+k-1; j++)
    {
        ans = max(a[j], ans);
       
    }
    cout<<ans<<" ";
    
   }
   
   cout<<endl;
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