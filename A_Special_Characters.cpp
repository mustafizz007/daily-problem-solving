#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
       no;
        return;
    }
    yes;
    string x = "AAAB";
    int y = n/2;
    for (int i = 0; i < y; i++)
    {
        cout << x;
    }
    cout << endl;
}

int main()
{
    opt();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    
}