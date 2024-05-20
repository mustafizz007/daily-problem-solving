#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<string> v(n);
    map<string, int> f;

    int cnt =0;
    string max_string;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        f[v[i]]++;
        
        if ( f[ v[i] ] > cnt)
        {
            cnt = f[v[i]];
            max_string = v[i];
        }
    }
    cout<<max_string;
}

int main()
{
    solve();
}