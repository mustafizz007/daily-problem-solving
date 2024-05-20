#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;

    if (x > m * 10)
    {
        while (n--)
        {
            x = (x / 2) + 10;
        }

        int ans = x - (m * 10);

        (ans > 0) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
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