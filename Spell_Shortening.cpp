#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    string a;
    cin >> a;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1])
        {
            a.erase(i, 1);
            break;
        }

    }
    cout << a << endl;
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