#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int x = (n /2);
   int y = n % 2;

   for (int i =1; i<=x; )
   {
    if (i <= x ) cout<<"ab";
    i++;
    if (i <= x) cout<<"ba";
    i++;
   }
   
   while (y--)
   {
    if(x % 2 ==0) cout<<"a";
    else cout<<"b";
   }
}

int main ()
{
    
        solve();

}