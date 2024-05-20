#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    vector<pair <int , int> > p(n);
    for (int i =0; i< n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(), p.end());
    //for (auto i: p) cout<< i.first<<" "<<i.second<<endl;
    for (int i = 1; i<n; i++)
    {
        if (p[i-1].second > p[i].second)
        {
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
   cout<<"Poor Alex"<<endl;
}

int main ()
{
    solve();
}