#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int m = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > m)
        {
            m = a[i + 1] - a[i];
        }
    }
    // cout<<m<<endl;
    double x = a[0] - 0;
    double y = (double)m / 2;
    double ans = max(x, y);

    double z = l - a[n - 1];
    double ansfinal = max(ans, z);
    cout << setprecision(10) << fixed << ansfinal << endl;
}

int main()
{

    solve();
}