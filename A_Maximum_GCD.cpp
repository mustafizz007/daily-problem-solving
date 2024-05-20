#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n; cin >> n;

    if (n % 2 == 0) cout << __gcd(n, n / 2) << endl;
    else cout << __gcd((n - 1), (n - 1) / 2) << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
} 