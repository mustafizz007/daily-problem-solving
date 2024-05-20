#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int a, b;
   cin>>a>>b;
   int lcm =  ( a * b ) /  __gcd(a, b);
   //cout<<lcn<<endl;
   int cnt=0;
   if (lcm == 1)
   {
    cout<<"NO"<<endl;
    return;
   }
   for (int i =2; i<= sqrt(lcm); i++)
   {
    if (lcm % i == 0) cnt++;
   }
   cout<<cnt<<endl;
   if (cnt >= 1) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}

int main ()
{

        solve();
   
}