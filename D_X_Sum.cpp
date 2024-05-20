#include<bits/stdc++.h>
using namespace std;
int calculate_X_sum (vector<vector<int>> &a, int i, int j, int n, int m, int sum)
{
    for (int k = i, t = j; k < n && t < m; k++, t++)
    {
        sum += a[k][t];
    }
    for (int k = i, t = j; k >= 0 && t >= 0; k--, t--)
    {
        sum += a[k][t];
    }
    for (int k = i, t = j; k < n && t >= 0; k++, t--)
    {
        sum += a[k][t];
    }
    for (int k = i, t = j; k >= 0 && t < m; k--, t++)
    {
        sum += a[k][t];
    }
    return sum-3*a[i][j];
}
int main()
{
    int i, j;
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                int crrntSum = calculate_X_sum(a, i, j, n, m, sum);
                mx = max(mx, crrntSum);
            }
        }
        cout << mx << endl;
    }
}
