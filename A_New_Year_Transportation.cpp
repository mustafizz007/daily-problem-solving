#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, t; cin >> n >> t;
    vector<int> v(n-1);

    for (int i = 1; i <= n-1; i++) cin >> v[i];

    int p = 1;

    while (1)
    {
        p += v[p];

        if (p >= t) break;
    }
    //cout << p;
    (p==t) ? cout<<"YES" : cout<<"NO"<<endl;
}

int main()
{
    solve();
}