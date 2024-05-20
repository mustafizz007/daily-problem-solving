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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // cout << a << " " << " "<< b <<"  "<< c <<" " <<d << " " <<endl ;

    int x = max(a, b);
    int y = min(a, b);
    bool ok = false;
    int cnt =0;

    for (int i = y; i <= x; i++)
    {
        if (i == c) cnt++;
        if (i == d) cnt++;
    }
    // cout <<cnt << endl;
    if (cnt == 1) { yes;
    }
    else {no;}

   
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