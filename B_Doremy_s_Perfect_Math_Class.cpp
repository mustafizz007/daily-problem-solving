#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   int a[n];
   cin>>a[0];
   int res = a[0];
   for (int i=1; i< n; i++) 
   {
    cin>>a[i];
    res = __gcd(res , a[i]);
   }
   //cout<<z<<endl;
   cout<<a[n-1]/res<<endl;
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