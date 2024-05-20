#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    ll l, r;
    cin >> l >> r;
    yes;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}

int main()
{
    opt();

    solve();
}
