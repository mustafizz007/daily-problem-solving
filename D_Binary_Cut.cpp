#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)

void solve()
{
    string a;
    cin >> a;

    int cnt = 1;

    int x = -1;
    map<char, int> m;

    for (int i = 0; i < a.size(); i++)

    {
        m[a[i]]++;
        if (a[i] == '1')
        {
            x = i;
            break;
        }
    }



    if (x == -1) {

        cout << cnt << endl;
        return;
    }

    // cout << x << endl;

    for (int i = x; i < a.size(); i++)
    {

        if (a[i] == '0' )
        {
            if (a[i+1] == '1' or a[i-1] == '1') cnt++;
        }
    }

       cout << cnt << endl;
}

int main()
{
    opt();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}