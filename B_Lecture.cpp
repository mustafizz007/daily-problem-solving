#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string, string>> v;

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        for (auto i : v)
        {
            if (x == i.first)
            {
                if (x.length() <= (i.second).length()) cout << x << " ";

                else cout << i.second << " ";
            }
        }
    }
    return;
}

int main()
{
    solve();
    return 0;
}