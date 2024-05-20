#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
    int n; cin>>n;
    string a;
    cin>>a;
int cnt=0, cntm=0;
    for(int i=0; i<n; i++)
    {
        if (a[i] == 'i' && a[i+1] == 'e' && a[i-1] == 'p') cnt++;
        if (a[i] == 'a' && a[i+1] == 'p' && a[i-1] == 'm') cnt++;
        if (a[i] == 'p' && a[i-2] == 'm' && a[i-1] == 'a' && a[i+1] == 'i' && a[i+2] == 'e') cntm++;
    }
   // cout<<cntm<<endl;
    
    
    cout<<cnt - cntm<<endl;
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