#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string a; cin >> a;

    bool need;

    for (int i = 1; i < a.size(); i++)
    {
        if (isupper(a[i]))
        {
            need = true;
        }
        else 
        {
            need = false;
            break;
        }
    }
    if (need)
    {
        for (int i = 0; i < a.size(); i++)
        {
            (isupper(a[i])) ? cout << (char)tolower(a[i]) : cout << (char)toupper(a[i]);
        }
    }
    else cout << a;
    
}

int main()
{
    solve();
}