#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n; cin>>n;
   int a[n];
   for (int i=0; i<n; i++) cin>>a[i];
   vector<int> b ({a[n-1]});

   for (int i=n-2; i>=0; i--)
   {
    if (a[i] > b.back())
    {
        b.push_back(a[i] %10);
        b.push_back(a[i]/10);

    }
    else b.push_back(a[i]);
   }

   if (is_sorted(b.rbegin(), b.rend())) {yes; return;}
   no;

  // for (auto i: b) cout<<i<<" ";
   //cout<<endl;
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}