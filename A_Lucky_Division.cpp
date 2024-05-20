#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    if (n % 7 == 0 or n % 4 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    else if (n % 47 == 0 || n % 74 == 0 || n % 44 == 0 || n % 77 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (n % 477 == 0 || n % 747 == 0 || n % 774 == 0 || n % 744 == 0 || n % 474 == 0 || n % 447 == 0 || n % 444 == 0 || n % 777 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}

int main()
{
    solve();
}