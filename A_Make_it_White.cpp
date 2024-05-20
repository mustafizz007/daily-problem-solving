#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;

   string a;
   cin>>a;
   int x,y;

   for (int i=0; i<n; i++)
   {
    if (a[i] == 'B')
    {
        x = i;
        break;
    }
   }
   for (int i= n-1; i>=0; i--)
   {
    if (a[i] == 'B')
    {
        y = i;
        break;
    }
   }
   cout<<abs(x - y) + 1<<endl;
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