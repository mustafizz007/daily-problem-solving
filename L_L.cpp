#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   string a; cin>>a;
   int b[n];
   for (int i =0; i<n; i++) b[i] = a[i] -'0';

   int mx = *max_element(b, b+n);
   int mn = *min_element(b, b+n);

   sort(b, b+n);
ll s=0;
   for (int i =0; i<n; i++)
   {
        s = i;
        
   }
}

int main ()
{
    
        solve();
  
}