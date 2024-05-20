#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin>>n;

    string a;
    cin>>a;

    map <char , int> m;
    int mx = 0;

    for (int i =0; i< a.size(); i++)
    {
        m[a[i]]++;

        if (m[a[i]] > mx) mx = m[a[i]];
    }
    if (mx > floor(n/2) )
    {
        int b = max(mx, (n-mx));
        int s = n - b;
        cout<<b - s<<endl;
    }

    else{
        if (n%2 != 0)
        {
            cout<<1<<endl;
            return;
        }
        cout<<0<<endl;
    }
   // for (auto i: m) cout<<i.first<<"  "<<i.second<<endl;
    //cout<<endl;

}
//help
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}