#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int x;
    int p = 0, ne = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0) z++;
        if (x < 0) ne++;
        if (x > 0) p++;
    }
    if (z >= 1)
    {
        cout << 0 << endl;
        return;
    }
    if (ne % 2 == 0)
    {
        cout << 1 << endl;
        cout << n << " " << 0 << endl;
    }
    else
    {
        cout << 0 << endl;
        return;
    }
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