#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n >= m)
    {
        cout << n - m;
        return;
    }

    int cnt=0;

    while (m > n)
    {
        if (m % 2 == 0)
        {
            m = m / 2;
            cnt++;
        }
        else
        {
            m = m + 1;
            cnt++;
        }
    }

    cnt = cnt + (n - m);
    cout << cnt;
}
//help taken 
int main()
{
    solve();
}