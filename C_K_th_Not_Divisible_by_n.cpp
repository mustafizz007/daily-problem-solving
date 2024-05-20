#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n,k; cin>>n>>k;
   cout<< k + ( (k-1) / (n-1) )<<endl;
   return;
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