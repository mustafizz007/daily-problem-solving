#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   ll a[n];
   for (ll i=0; i<n; i++) cin>>a[i];

   for (int i=1; i<n-1; i++)
   {
    if ((2 *a[i-1]) > a[i] or a[i] < 0)
    {
        cout<<"NO"<<endl;
        return;
    }
    a[i] -= 2 *a[i-1];
    a[i+1] -= a[i-1];
    a[i-1] =0;
   }

  // for (auto i: a) cout<<i<<" ";
   //cout<<endl;

   for (auto i: a) 
   {
    if(i !=0)
    {
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;


  
   

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