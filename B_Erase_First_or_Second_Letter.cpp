#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n; cin >> n;

    set<char> s;

    string a; cin >> a;
    
    int ans = 0;
    for (auto i : a)
    {
        s.insert(i);
        ans += s.size();
    }
    cout << ans << endl;
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