#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, m;
   cin>>n>>m;
   
   int x = n*m / __gcd(max(n,m), min(n,m));
   while (1)
   {
         x = x / __gcd(max(n,m), min(n,m));
         if (x <= max(n,m) ||  x>= min(n,m)) break;
   }
   cout<<x<<endl;
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