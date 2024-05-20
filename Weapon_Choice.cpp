#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int h, x, y1, y2, k;
    cin >> h >> x >> y1 >> y2 >> k;

    int ans = 0, cnt = 0;
    double b = 0;

    int a = y1 * k;
    // cout<<a<<endl;
    int d;

    if (a >= h)
        ans = (h / y1) + ((h % y1) != 0);
    else // if (a < h)
    {
        ans = k;
        int o = h - a;
        b = (o / y2) + ((o % y2) != 0);
        // cout<<b<<endl;
        ans = ans + b;
    }
    //  cout<<b<<" "<<d<<endl;
    // cout<<d<<endl;

    cnt = (h / x) + ((h % x) != 0);

    /// cout<<ans<<" "<<cnt<<endl;

    cout << min(cnt, ans) << endl;
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