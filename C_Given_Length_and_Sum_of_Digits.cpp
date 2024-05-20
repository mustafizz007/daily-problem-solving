#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n, s; cin>>n>>s;

   if (s <= n or n == 1)
   {
    cout<<"-1 -1"<<endl;
    return;
   }
   ll z =  s /10;
   //cout<<z<<endl;
   if (n < z+1)
   {
    cout<<"-1 -1"<<endl;
    return;
   }

   cout<<"9";
   n--;
ll baki = s - 9;
   //cout<<baki;
   while(n--)
   {
 
    ll f = baki;
    ll k = baki-1;
    cout<<baki--;

    for (int i=1; i<=(f -baki); i++) cout<<1;

   }

}

int main ()
{
    opt();
    
        solve();
}
    
