#include<bits/stdc++.h>
using namespace std;
bool ok(string s)
{
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == s[i+1])
        {
            return false;
        } 
    }
    return true;
}
void solve ()
{
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;

    if (ok(s)) 
    {
        cout<<"YES"<<endl;
        return;
    }
    if (!ok(t) || t[0] != t[m-1])
    {
        cout<<"NO"<<endl;
        return;
    }
    for (int i=0; i<n; i++)
    {
        if (s[i] == s[i+1])
        {
            if (s[i] == t[0])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
    


}
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}