#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = 2; i <= n; i++)
    {
        a[i] += a[i - 1];
    }
    int ans = INT_MIN;

    for (int i = n; i >= 0; i--)
    {
        int indx = n - i;
        if (indx > k) break;

        int p = min(i, x);

        int sum = (a[i-p] - (a[i] - a[i-p]));
 
        //if (i-x > 0)  sum = ( a[i - x] - (a[i] - a[i-x]) ); 
        //else sum = ( a[i - i] - (a[i] - a[i-i]) ); 

        ans = max(ans, sum);
    }
    cout << ans << endl;
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