#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   string a; cin>>a;
   string b = "codeforces";
   int cnt =0;

   for (int i=0; i<10; i++) if (a[i] != b[i]) cnt++;
   
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