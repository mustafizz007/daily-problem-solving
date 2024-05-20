#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n; cin>>n;
    string a; cin>>a;

    for (int i=0; i<= 4; i++)
    {
        string s1 = a.substr(0, i);
        string s2 = a.substr(n-4+i);
        string ans = s1+s2;
        if (ans == "2020") 
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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