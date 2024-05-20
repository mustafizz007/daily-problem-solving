#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll h, l;
    cin >> h >> l;

    double x = ((l * l) - (h * h));

    cout << fixed << setprecision(13) << x / (2 * h) << endl;
}

int main()
{

    solve();
}