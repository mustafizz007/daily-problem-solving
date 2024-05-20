#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;

   if (n <= 26)
   {
    cout<<"aa"<<char('a' + n-3)<<endl;
   }
   else if (n > 26)
   {
    int z = n /26;
    if (n ==1)
    {
        cout<<"aay"<<endl;
    }
    else if (n == 2)
    {
        
    }
   }
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}