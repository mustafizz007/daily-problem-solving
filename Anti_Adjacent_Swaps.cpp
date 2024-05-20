#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i=0; i<n;i++) cin>>a[i];

   if (n ==1 or n > 3) cout<<"YES"<<endl;

   else if (n == 2)
   {
    if (a[0] <= a[1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }

   else if ( n== 3)
   {

    if (a[0] <= a[1] && a[1] <= a[2])
    {
        cout<<"YES"<<endl;
    }

    else if (a[0] >= a[1] && a[1] >= a[2]) 
    {
        cout<<"YES"<<endl;
    }
    
    else cout<<"NO"<<endl;
   }



}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}