#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    int v[10] = {};

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;

        int x = a - '0';

        if (x == 2)
        {
            v[2]++;
        }

        else if (x == 3)
        {
            v[3]++;
        }

        else if (x == 4)
        {
            v[2] += 2;
            v[3]++;
        }
        else if (x == 5)
        {
            v[5]++;
        }

        else if (x == 6)
        {
            v[5]++;
            v[3]++;
        }
        else if (x == 7)
        {
            v[7]++;
        }
        else if (x == 8)
        {
            v[7]++;
            v[2] += 3;
        }
        else if (x == 9)
        {
            v[7]++;
            v[3] += 2;
            v[2]++;
        }
    }
    for (int i = 9; i >= 2; i--)
    {
        while (v[i]--)
        {
            cout << i;
        }
    }
}

int main()
{

    solve();
}