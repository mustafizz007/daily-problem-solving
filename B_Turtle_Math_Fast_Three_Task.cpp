#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    int a[n];
    int b[n];
    for (int i=0; i<n; i++) 
    {
        cin>>a[i];
        b[i] = a[i] % 3;
    }
    map<int, int> m;
    for(auto i: b) m[i]++;

    int tw =0, on=0;

    for (auto i: m) 
    {
        if (i.first == 2) tw = i.second;
        else if (i.first == 1) on = i.second;
    }
    if (tw % 3 ==0 && (n % 3 == on % 3))
    {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;


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