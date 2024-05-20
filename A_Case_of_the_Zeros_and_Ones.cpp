#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    string a;
    cin >> a;
    int cnt1 = 0, cnto = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            cnt1++;
        else //if (a[i] == '0')
            cnto++;
    }
    cout << abs(cnt1 - cnto) << endl;
}

int main()
{
    solve();
}