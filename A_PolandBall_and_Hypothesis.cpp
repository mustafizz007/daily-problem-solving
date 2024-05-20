#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; 
   cin>>n;

   if (n == 1) cout<<3<<endl;
   if (n == 2) cout<<4<<endl;
   else if (n > 2) cout<<n-2<<endl;
}

int main ()
{
    solve();
}