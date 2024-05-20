#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u]++;
        m[v]++;
    }
    for (auto i : m) if (i.second == 1) cnt++;
    (cnt % 2 == 0) ? cout << cnt / 2 << endl : cout << (cnt + 1) / 2 << endl;
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
