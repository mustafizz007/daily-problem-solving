#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;

   vector<int> v;

   int low = 0;
   int up = INT_MAX;

   for (int i=0; i< n; i++)
   {
    int a, x;
    cin>>a>>x;

    if (a == 1) low = max (low, x);
    else if(a == 2) up = min(up , x); 
    else v.push_back(x);
   }

   ll cnt = up - low + 1;

   if (low > up)
   {
    cout<<0<<endl;
    return;
   }

   for (auto i : v)
   {
    if (i >= low && i <= up)
    {
        cnt --;
    }
   }
   cout<<cnt<<endl;

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