#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], x[n];

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> x[i];

    for (ll i = 0; i < n; i++) if (x[i] < 0) x[i] *= -1;

    map<ll, ll> m;
    
    for (ll i = 0; i < n; i++)
    {
        m[x[i]] += a[i];
    }

    ll cnt = 0;

    for (ll i = 1; i <= n; i++)
    {
        cnt += k;
        cnt -= m[i];

        if (cnt < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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