#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   int a[n];

   for (int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   sort(a, a+n);

   for (int i =0; i<n; i++)
   {
    int x = a[i];
    cout<<((x-1) / 2) +1<< " ";
   }
   cout<<endl;
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