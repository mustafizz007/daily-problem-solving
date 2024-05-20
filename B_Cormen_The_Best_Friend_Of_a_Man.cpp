#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    int cnt = 0, s = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    // cout<<s<<endl;

    for (int i = 1; i < n; i++)
    {
        if (a[i] + a[i - 1] < k)
        {

            a[i] = k - a[i - 1];

            // cout<<a[i]<<" ";
            // cnt += a[i];
        }
        // cout<<cnt<<" ";
    }

    int s2 = 0;
    for (auto i : a) s2 += i;

    cout << abs(s2 - s) << endl;

    for (auto i : a) cout << i << " ";
}

int main()
{
    solve();
}