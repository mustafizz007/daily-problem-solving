#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; cin>>n;
   if (n % 7 == 0 or n % 3 == 0)
   {
    cout<<"YES"<<endl;
    return;
   }
ll sum =0;
   for (int i=1; i<=100; i++)
   {
    for (int j=1; j<=100; j++)
    {
        sum = 3 * i + 7 * j;

        if (sum == n) 
        {
            cout<<"YES"<<endl;
            return;
        }
    }
   }
   cout<<"NO"<<endl;
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