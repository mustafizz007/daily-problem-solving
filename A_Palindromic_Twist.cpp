#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
    int n; cin>>n;
    string a; cin>>a; 


    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        int z = abs (a[i] - a[j]);
        if (z > 2 or z == 1)
        {
            no;
            return;
        }
    
    }
  
    yes;
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