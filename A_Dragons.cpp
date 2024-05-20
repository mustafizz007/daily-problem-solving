#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int s, n;
    cin >> s >> n;
    vector<pair <int, int> > m;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m.push_back({x, y});
    }
    sort(m.begin() , m.end());
    for (auto i : m)
    {
        if (s > i.first)
        {
            s = s + i.second;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    // cout<<s<<endl;
    cout << "YES" << endl;
}

int main()
{
    solve();
}