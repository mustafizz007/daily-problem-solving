#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   string a;
   cin>>a;
   int p =0, ne=0;
   for (int i =0; i< n; i++)
   {
    if ( a[i] == '+') p++;
    else if ( a[i] == '-') ne ++;
   }
   cout<<abs(p - ne)<<endl;
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