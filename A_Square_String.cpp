#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a;
    cin >> a;

    int l = a.length();

    if (l % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    bool sq = true;

    for (int i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l / 2 + i]) sq = false;
    }

    if (sq) cout << "YES" << endl;
    else cout << "NO" << endl;

    return;
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