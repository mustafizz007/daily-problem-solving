#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   ll a[n];

   for(ll i=0; i<n; i++) cin>>a[i];

ll b = a[0];
ll re;

   for (ll i=1; i<n; i++)
   {
    re = __gcd(b, a[i]);
    b = re;
   }
   //cout<<b<<endl;
   //if (b == 1)
   //{
    //cout<<1<<endl;
    //return;
  //}
ll cnt =0;
set <ll> ss;

   for (ll i =1; i<= sqrt(b); i++)
   {
    if (b % i == 0)
    {
        if ((b/i) != i)
        {
            cnt+=2;
        }
        else cnt++;
       
        //ss.insert({i, n/i});
       
    }
   }
   cout<<cnt<<endl;
   //cout<<ss.size()<<endl;

}

int main ()
{
    opt();
   
        solve();
 
}