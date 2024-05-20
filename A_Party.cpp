#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int node = a[i];
        int dep = 1;
        while (node != -1)
        {
            node = a[node];
            dep++;
        }
        cnt = max(cnt, dep);
    }
    cout << cnt << endl;
}

int main()
{
    solve();
}