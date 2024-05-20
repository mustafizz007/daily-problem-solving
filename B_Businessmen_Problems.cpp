#include<bits/stdc++.h>
using namespace std;
using ll = long long;

map <int, int> m;
void solve ()
{
   ll  n; cin>>n;
   //map <int, int> m;

   for (ll i =1; i<=n; i++) 
   {
      ll x, y; 
      cin>>x>>y;

      m[x] = y;    
   }  
   ll mm; cin>>mm;
   for (ll i =1; i<=mm; i++)
   {
      ll x, y; cin>>x>>y;

      
         if (m[x]  < y)
         {
            m[x]  = y;
         } 
     
   }
   ll s=0;
   for (auto i: m) s+= i.second;
   cout<<s<<endl;
}

int main ()
{
        solve();
   
}