#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, d; cin>>n>>d;
   int a[n];
   for (int i=0; i<n; i++)cin>>a[i];
   for (int i =d; i<n; i++)cout<<a[i]<<" ";
   for (int i=0; i<d; i++)cout<<a[i]<<" ";
   cout<<endl;

 }

int main ()
{
   
        solve();
}
    