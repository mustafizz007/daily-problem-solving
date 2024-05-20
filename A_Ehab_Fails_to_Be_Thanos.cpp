#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    int s = 2 * n; 
    int a[s];

    for (int i = 0; i < s; i++)  cin >> a[i];
    sort(a, a + s);

    int s1 = 0, s2 = 0;

    for (int i = 0; i < s / 2; i++)  s1 += a[i];

    for (int i = s / 2; i < s; i++)  s2 += a[i];

    if (s1 == s2) 
    {
        cout << "-1";
        return;
    }

    for (int i = 0; i < s; i++) cout << a[i] << " ";
    
}

int main()
{
    solve();
}