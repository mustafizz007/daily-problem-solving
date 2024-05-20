#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            int x = sqrt(i);
            if (x * x == i)
                cnt++;
        }
        cout << cnt << endl;
    }
}

int main()
{

    solve();
}
