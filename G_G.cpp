#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   vector< pair<int, int> > a;
   while (n --)
   {
    int x, y; cin>>x>>y;
    a.emplace_back(x, y);

   }
   //for (auto i :v) cout<<i.first<<" "<<i.second<<endl;
   //cout<<endl;
   for (int i =0; i<n; i++)
   {
    if ((a[i].first != a[(n-1) - i].first or a[i].first != a[i].second ) or (a[i].second != a[(n-1) - i].second or a[i].second != a[(n-1) -i].second))
    {
        cout<<"No solution"<<endl;
        return;
    }
    if (a[i].first == a[(n-1) - i].second or a[(n-1) - i].second == a[i].first)
    {
        cout<<i<<" -"<<endl;
        return;
    }
    cout<<i<<" +"<<endl;
   }
}

int main ()
{
    
    solve();
    
}