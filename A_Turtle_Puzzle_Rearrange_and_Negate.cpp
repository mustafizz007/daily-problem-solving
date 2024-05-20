#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i=0; i<n; i++) cin>>a[i];

   int s =0;
   for (int i=0; i<n; i++)
   {
    if (a[i] < 0) s+= a[i] * -1;
    else s+= a[i];
   }
   cout<<s<<endl;


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