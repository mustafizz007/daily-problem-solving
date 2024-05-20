#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        string b = "vika";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 0;

        bool ok = false;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == b[k])
                {
                    k++;
                    if (k == 4)
                    {
                        ok = true;
                        //break;
                    }
                }
            }
            if (ok) break;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}