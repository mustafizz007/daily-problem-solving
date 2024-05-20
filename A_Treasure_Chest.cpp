#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int c, k, s;
    cin >> c >> k >> s;
    if (k <= c)
        cout << c << endl;
    else
    {
        if (k - c <= s)
            cout << c + (k - c) << endl;
        else
        {
            int x = k - (c + s);
            cout << c + s + (2 * x) << endl;
        }
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