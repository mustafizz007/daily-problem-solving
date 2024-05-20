#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   if (n <= 30)
   {
    cout<<"NO"<<endl;
   
   }
   else
   {
    cout<<"YES"<<endl;

    int x = n-30;
    if (x != 6 && x != 10 && x != 14)
    {
        cout<<"6 10 14 "<<n-30<<endl;
    }
    else cout<<"6 10 15 "<<n-31<<endl;
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