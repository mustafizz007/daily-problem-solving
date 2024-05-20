#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;

   //int x;
   ll s =0;
   int odd =0, even =0;

   //int d =0;

   for (int i=0; i< n; i++)
   {
    int x;
    cin>>x;
    s+=x;

    if (x % 2 == 1) odd++;
    else even++;

    int d = odd / 3;

    if (even == 0 && odd == 1) d = 0;

    else if(odd % 3 == 1) d =  ( odd + 2 ) / 3;

   // else if (odd % 3 == 0) d = odd / 3;
   

    cout<< s - d << ' ';
   }
   cout<<endl;
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