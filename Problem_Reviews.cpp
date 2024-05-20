#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i=0; i<n; i++) cin>>a[i];
   for (auto i: a) 
   {
    if (i <= 4)
    {
        cout<<"NO"<<endl;
        return;
    }

   }
   cout<<"YES"<<endl;
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