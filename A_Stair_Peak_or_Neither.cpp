#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int a, b,c;
   cin>>a>>b>>c;
   if (a < b && b < c) 
   {
    cout<<"STAIR"<<endl;
   // return;

   }
   else if (a < b && b > c)
   {
    cout<<"PEAK"<<endl;
   }
   else cout<<"NONE"<<endl;
   
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}