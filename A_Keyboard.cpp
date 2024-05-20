
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char x;  cin >> x;
    string y; cin >> y;

    int o = (x == 'R') ? -1 : 1;

    for (int i = 0; i < y.size(); )
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (y[i] == a[j])
            {
                cout << a[j+ o];
                i++;
            }
        }  
    }
}

int main()
{
    solve();
}