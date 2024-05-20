#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << "YES" << endl;
        return;
    }

    if ((n & (n - 1)) == 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}