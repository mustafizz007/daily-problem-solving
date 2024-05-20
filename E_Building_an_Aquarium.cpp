#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, w;
    cin >> n >> w;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll r = 1e10;
    ll l = 1;
    ll mid;

    while (r - l > 1)
    {
        ll water = 0;
        mid = l + (r - l) / 2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < mid)
            {
                water += mid - a[i];
            }
        }
        if (water > w)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << l << endl;
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