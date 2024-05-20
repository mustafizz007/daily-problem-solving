#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a;
    cin >> a;

    map<char, int> m;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '4' or a[i] == '7')
        {
            m[a[i]]++;
        }
    }
    if (m.empty()) 
    {
        cout<<-1<<endl;
        return;
    }
    //for (auto i : m) cout<<i.first<<" "<<i.second;
    int mx =0;
    for (auto i: m)
    {
        mx = max(mx, i.second);
    }

    for (auto i : m)
    {
        if (mx == i.second)
        {
            cout<<i.first<<endl;
            return;
        }
    }
    
}

int main()
{

    solve();
}