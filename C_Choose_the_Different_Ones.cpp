#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int a[n], b[m];

    for (int i = 0; i < n; i++)cin >> a[i];

    for (int i = 0; i < m; i++)cin >> b[i];

    set<int> x, y, z;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k) x.insert(a[i]);
    }
    
    for (int i = 0; i < m; i++)
    {
        if (b[i] <= k) y.insert(b[i]);
    }

    if (x.size() < k / 2 or y.size() < k / 2)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i : x)
    {
        z.insert(i);
    }
    for (int i : y)
    {
        z.insert(i);
    }

    int cnt = 0;
    for (auto i : z)
    {
        if (i <= k)
            cnt++;
    }
    if (cnt == k)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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