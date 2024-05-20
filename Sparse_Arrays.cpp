#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, q; cin>>n;

   vector<string> a(n);
   for (int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   //for (auto i: a) cout<<i<<endl;
   cin>>q;
   
   while (q--)
   {
    string z; cin>>z;
    ll cnt =0;
    for (auto i: a)
    {
        if (i == z) cnt++;
    }
    cout<<cnt<<endl;
   }


}

int main ()
{
   solve();
}