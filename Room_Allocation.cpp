#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i=0; i<n; i++) cin>>a[i];
   double cnt=0;
   for (int i=0; i<n; i++)
   {
    cnt += ceil (double (a[i]) /2);
   }
   cout<<cnt<<endl;
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