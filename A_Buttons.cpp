#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << a + b << endl;

    else if (abs(a - b) >= 1)
    {
        int mx = max(a, b);
        cout << mx + mx - 1 << endl;
    }
}

int main()
{

    solve();
}