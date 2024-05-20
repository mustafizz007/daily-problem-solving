#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int z = n;
   map<char, int> m;
   while (n--)
   {
    string a; cin>>a;
    for (auto i: a)
    {
        m[i]++;
    }
   }
   for (auto i: m)
   {
    if (i.second % z !=0)
    {
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;
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