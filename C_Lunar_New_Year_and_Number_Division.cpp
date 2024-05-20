#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n;
   cin>>n;

   ll a[n];
   for (ll i=0; i<n; i++)
   {
    cin>>a[i];
   }
   sort(a, a+n);

   ll s =0;
   
   for (ll i =0; i< n/2; i++)
   {
    s +=  ( (a[i] + a[(n-1)-i]) * (a[i] + a[(n-1)-i]) );
   }
   cout<<s<<endl;
}

int main ()
{
  
    solve();
    
}