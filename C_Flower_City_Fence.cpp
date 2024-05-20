#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;cin>>n;
   //int a[n];
   //for (int i =0; i<n; i++) cin>>a[i];
   vector<int> v(n+1);

   map<int, int> indx;
   map<int, int> val;

   for (int i = 1; i<=n; i++)
   {
    int x;
    cin>>x;

    v[i] = x;

    indx[i] = x;
    val[x] = i;
   }
   for (int i =1; i<=n; i++)
   {
    int t = v[i];
    int l = indx[t];
    int z = val[l];

    if (t != z)
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