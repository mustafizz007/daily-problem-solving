#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   vector<int> a(n);
   for (int i=0; i<n; i++) cin>>a[i];
   int s=0, ss=0;
   for (int i=0; i<n; i++)
   {
    if (a[i] > 0) s+=a[i];
    else ss+=a[i];
   }
   //cout<<s<<" "<<ss<<endl;
   cout<<abs(s - ss)<<endl;
}

int main ()
{
    
        solve();
    
}