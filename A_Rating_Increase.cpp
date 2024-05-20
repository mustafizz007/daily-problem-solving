#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a;
    cin >> a;

    string b = "";
    string c = "";

    b = b + a[0];

    int x;
    bool ok = true;

    for (int i = 1; i < a.size(); i++)
    {
        // a[i] = a[i] - '0';
        if (a[i] == '0' && ok)
        {
            b += a[i];
        }
        if (a[i] != '0')
        {
            ok = false;
        }
        if (!ok)
        {
            c += a[i];
        }
    }
    // cout<<b<<" ";
    if (c.empty()) c += '0';

    // cout<<c<<endl;

    int one = stoi(b);
    int two = stoi(c);
    // cout<<one;

    if (one > two or one == two) cout << -1 << endl;
    else cout << b << " " << c << endl;
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