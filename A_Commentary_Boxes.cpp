#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n, m, a, b;
   cin>>n>>m>>a>>b;   
   ll d, bb; 

   if (n % m ==0) cout<<0<<endl;
   else 
   {
     d = (n % m) * b;

     ll x = ceil(double(n) / m);
     ll y = x * m;
     bb = abs(n-y) * a;
     cout<<min(d, bb)<<endl;
   }
   

}

int main ()
{
   
        solve();
    
}