#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k, x;
    cin >> n >> k;
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        ans *= x;
    }

    if (2023 % ans == 0)
    {
        cout << "YES" << endl;
        cout << 2023 / ans << " "; 

        for (ll i = 0; i < k - 1; i++) cout << 1 << " ";
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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
