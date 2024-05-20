#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   ll n; cin>>n;
   string a, b;
   cin>>a>>b;
   bool ok = true;
   ll cntd =1;
   for(int i=0; i<=n; i++)
   {
    
    ll x = a[i+1] - '0'+ a[i+2] - '0';
    ll y = b[i] - '0' + b[i+1] - '0';

    if (x <= y && ok) cout<<a[i]; 
    else
    {
        if (cntd ==1) 
        {
            cout<<a[i];
            cntd--;
        }
        cout<<b[i];
        ok = false;
    }
   }
   cout<<endl;
   ll cnt =0;
   for (int i=0; i<n; i++) if (a[i] == b[i]) cnt++;
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