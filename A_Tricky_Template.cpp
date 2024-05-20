#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    int f =0;

    for (int i=0; i<n; i++)
    {
       if (c[i] != a[i] && c[i] != b[i])
       {
        cout<<"YES"<<endl;
        return;
       }
    }
    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}