#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a;
    cin >> a;
    int b[a.size()];
    for (int i = 0; i < a.size(); i++)
    {
        int d = a[i] - '0';
        b[i] = d;
    }
    int f = 0;
    // for (auto i: b) cout<<i<<" ";
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] != 1 && b[i] != 4)  f = 1; 

        if (b[0] == 4) f = 1; 

        if (b[i] + b[i + 1] + b[i + 2] == 12) f = 1; 
    }
    (f == 1) ? cout << "NO" << endl : cout << "YES" << endl;
}

int main()
{
    solve();
}
