#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n,x; cin>>n;
   int a[n];
   map<int ,int> m;
   for (int i=0; i<n; i++)
   {
    cin>>x;
    m[x]++;
   }
  for (auto i: m)
  {
    if (i.second >= 3) 
    {
        cout<<i.first<<endl;
        return;
    }
  }
  cout<<"-1"<<endl;
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