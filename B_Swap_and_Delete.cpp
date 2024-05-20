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
    if(a.size() == 1){
        cout << 1 <<endl;
        return;
    }
    int z = 0, on = 0;
    vector<int> aa, b;
    fr(i, a.size())
    {
        if (a[i] - '0' == 1)
        {
            on++;
            aa.push_back(i + 1);
        }
        else
        {
            z++;
            b.push_back(i + 1);
        }
    }
    if (z >= on)
    {
        cout << 0 << endl;
        return;
    }
    // cout << aa[aa.size()-1] <<endl;
    // cout << b[0] <<endl;
    if (aa[aa.size()-1] < b[0]){
        cout << on <<endl;
        return;
    }
    cout << abs (on - z) <<endl;

   
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
