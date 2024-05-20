#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
        cout << 1 << endl;
    else
    {
        double ans = double(n) / a;
        if (fmod(ans, 1.0) == 0.0)
            cout << n / a << endl;
        else
            cout << (n / a) + 1 << endl;
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