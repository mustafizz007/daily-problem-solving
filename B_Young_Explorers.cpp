#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int cnt =0;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
       m[a[i]]++;
    }
    int baki =0;
    for (auto i : m)
    {   
        i.second += baki;
        cnt+=  i.second / i.first;
        baki = i.second % i.first; 
    }
    cout << cnt << endl;
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