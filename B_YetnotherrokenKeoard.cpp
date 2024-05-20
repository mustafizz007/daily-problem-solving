#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a;
    cin >> a;
    vector<pair<int, char>> smll, cap;
    string temp;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 'b' && a[i] != 'B')
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cap.push_back({i, a[i]});
            }
            else smll.push_back({i, a[i]});
        }
        else
        {
            if (a[i] == 'B')
            {
                if(!cap.empty())
                {
                    cap.pop_back();
                }
            }
            else if (a[i] == 'b') 
            {
                if(!smll.empty())
                {
                    smll.pop_back();
                }
            }
        }
        temp.push_back('.');
    }
    
    for(auto i: cap)
    {
        temp[i.first] = i.second;
    }

    for (auto i : smll)
    {
        temp[i.first] = i.second;
    }

    for(int i=0; i < a.size(); i++) 
    {
        if (temp[i] == '.') continue;
        else cout<<temp[i];
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