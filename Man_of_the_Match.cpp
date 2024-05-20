#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   //int n=22;
   vector<int> v;
   for (int i =1; i<=22; i++)
   {
    
    int x, y; cin>>x>>y;
    v.push_back(x + (y * 20));
   }
   int z = *max_element(v.begin(), v.end());
   //cout<<z<<endl;
   for (int i=0; i<v.size(); i++)
   {
    if (v[i] == z)
    {
        cout<<i+1<<endl;
        return;
    }
   }
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