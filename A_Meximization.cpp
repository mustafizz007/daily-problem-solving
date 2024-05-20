#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; 
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++)
   {
    cin>>v[i];
   }
   sort(v.begin(), v.end());

   vector<int> u; 
   vector<int> d; 

   for (int i=0; i<n; i++)
   {
    if (v[i] != v[i+1] && i < n) 
    {
        u.push_back(v[i]);
    }
    else
    {
        d.push_back(v[i]);
    }
   }
   for (auto i : u) cout<<i<<" ";
   for (auto i: d) cout<<i<<" ";
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