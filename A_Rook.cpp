#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   string a; 
   cin>>a;

   string b = "abcdefgh";

   
    for (int i = a[1] - '0' +1; i<= 8; i++) 
    {
         cout<<a[0];
         cout<<i<<endl;

    }
    for (int i = a[1] - '0'-1; i>=1; i--)
    {
        cout<<a[0];
        cout<<i<<endl;
    }
    for (int i = 0; i<8; i++)
    {
        if (a[0] == b[i]) continue;
        else 
        {
            cout<<b[i]<<a[1]<<endl;
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