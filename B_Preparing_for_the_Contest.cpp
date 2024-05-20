#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    if (k == 0)
    {
        sort(a, a + n, greater<>());
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    else if (k == n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= k; i++)
    {
        cout<<i<<" ";
    }
    for (int i = n; i > k; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;

 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}