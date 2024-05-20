#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin>>n;
    char a[n];
    map<char , int> m;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    int cnt =0;
   //for (auto i: m) cout<<i.first<<" "<<i.second<<endl;

    for (char i = 'A'; i<= 'Z'; i++)
    {
        if (m.find(i) != m.end())
        {
            int x = i - 'A';
            //cout<<x<<endl;
            if (m[i] -1 >= x)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
   
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