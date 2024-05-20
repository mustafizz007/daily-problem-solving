#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int x,y; cin>>x>>y; 
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int g = abs(max(abs(a-d)-1, abs(b-c)-1) );

   if (g == x) cout<<2<<endl;
   if (g == x && x == y ) cout<<1<<endl;
   if (g == (2 * x) -1 && x == y) cout<<2<<endl;
   if (g < x && g < y) cout<<0<<endl;


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