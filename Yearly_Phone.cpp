#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int x = n % 10;
    n = n / 10;
    int y = n % 10;
    cout << "K" << y << x << endl;
}

int main()
{
    solve();
}