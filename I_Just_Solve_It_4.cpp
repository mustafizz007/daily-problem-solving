#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   ll n ,m ,l, r; 
   cin>>n>>m>>l>>r;


   ll lcm = ((n * m) / __gcd(n,m));
   //cout<<lcm<<endl;

   if ((l-1) / lcm > r / lcm)
   {
    cout<<0<<endl;
    return;
   }

   ll ans = ( r /lcm) - ((l-1)/lcm);

   cout<<ans<<endl;


}

int main ()
{
    opt();
    
        solve();
   
}