#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   ll s=0;
   
   if (n % 2 ==0)
   {
    ll z = n/2;
    //cout<<z-1<<z+1<<endl;
    ll xx = z-1;
    ll yy = z+1;

    while (xx >0)
    {
        s+= xx %10;
        xx = xx / 10;

    }
    while (yy > 0)
    {
        s += yy %10;
        yy = yy /10;
    }
    
   }
   else if (n % 2 !=0){
    ll z = n/2;
    ll xx = z;
    ll yy = z+1;
    while (xx >0)
    {
        s += xx %10;
        xx = xx/10;
    }
    while (yy > 0)
    {
        s+= yy %10;
        yy = yy /10;
    }
   }
   
   //cout<<x-1<<" "<<y+1<<endl;
   cout<<s<<endl;
}

int main ()
{
    
        solve();

}