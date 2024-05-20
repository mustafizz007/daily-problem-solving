#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int l, r;
    cin >> l >> r;

    if (2 * l > r)
    {
        cout << "-1 "<< "-1" << endl;
        return;
    }
    cout << l << " " << 2 * l << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}