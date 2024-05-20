#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;

    cin >> n;

    //vector<int> a(n);
    pair<int, int> a[n+1];

    for (int i = 1; i <= n; i++) 
    {
        //a[i].first = i;
         cin >> a[i].first;
         a[i].second = i;
    }

    sort(a + 1 , a + n + 1);

    //for (auto i: a) cout<<i.first<<" "<<i.second<<endl; 

    for (int i = 1, j = n; i< j; i++, j--)
    {
        cout<<a[i].second<<" "<<a[j].second<<endl;
    }


}


int main()
{
    solve();
}