#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '1')
        {
            x++;
        }
        else if (a[i] == '1' && b[i] == '0')
        {
            y++;
        }
    }
    cout << min(x, y) + abs(x - y) << endl;
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