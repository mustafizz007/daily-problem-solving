#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i =0; i<n; i++) cin >> a[i];
int ans = INT_MIN;
   for (int i=0; i<n; i++)
   {
    int x = sqrt(a[i]);
    int xx = x*x;
    if (xx != a[i])
    {
        ans = max(ans, a[i]);
    }
   }
   cout<<ans<<endl;
   
}

int main ()
{
    opt();
   
        solve();
    
}