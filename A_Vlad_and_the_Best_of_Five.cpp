#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   string a; cin>>a;
   int cnta=0, cntb=0;
   for (int i =0; i<a.size(); i++)
   {
    if (a[i] == 'A')cnta++;
    else cntb++;
   }
   if (cnta > cntb) cout<<"A"<<endl;
   else cout<<"B"<<endl;
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