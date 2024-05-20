#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n, k; cin>>n>>k;
   int a[n];
   for(int i=0; i<n; i++) cin>>a[i];
   int ans = INT_MIN;
   for (int i=0; i<n; i++)
   {
    if (k % a[i] == 0)
    {
        ans = max(ans, a[i]);
    }
   }
   cout<<k/ans<<endl;
}

int main ()
{
    opt();
    
        solve();
    
}