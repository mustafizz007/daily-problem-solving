#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    int ans = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
    cout<<ans<<endl;
    
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