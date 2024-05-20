#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll a, b, c, y, x;
   cin>>a>>b>>c;

   x = abs (1 - a);
   if ( c == 1)
   {
    y = abs (b-c);
   }
   else y = (abs (b-c) + abs (c-1));
   if ( x == y)
   {
    cout<<"3"<<endl;
   }
   else if (x < y) cout<<"1"<<endl;
   else cout<<"2"<<endl;
}

int main ()
{
    ll t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}