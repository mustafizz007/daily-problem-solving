#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        ll cnt = 0;

        cnt += (a[0] - 1);

        ll b[n];
        b[0] = a[0];
        ll x = 2;

        for (ll i = 1; i < n; i++)
        {
            if (a[i] < x)
            {
                b[i] = a[i];
            }
            else
            {
                b[i] = x;
                x++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cnt += (a[i] - b[i]);
        }
        cout << cnt << endl;
    }
}
