#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; 
   cin>>n;
   if (n == 1) 
   {
    cout<<"no"<<endl;
    return;
   }
   for (int i = 2; i <= sqrt(n); i++)
   {
    if(n % i == 0)
    {
        cout<<"no"<<endl;
        return;
    }
   }
   cout<<"yes"<<endl;
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