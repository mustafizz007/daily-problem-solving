#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n;
   cin>>n;

   ll a=0 ,b=1, c=1, d=1;
   ll e=1;

   for (int i =1; i<= n; i++)
   {
     a += i;
     a = a % 1000000007;

     b *= n;
     b = b %1000000007;

     c *= i;
     c = c % 1000000007;

     d *= 2;
     d = d % 1000000007;

     e *= 3;
     e = e  % 1000000007;
   }
   cout<<a<<" "<<b <<" "<<c<< " "<<(d+e) % 1000000007;
}

int main ()
{
   solve();
}