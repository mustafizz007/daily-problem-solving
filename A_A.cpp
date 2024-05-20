#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
   int n; cin >> n;

   vector < pair <int, int > > m;

   for (int i =0; i<n; i++)
   {
    int x, y; cin >> x >> y;

    m.emplace_back(max(x,y), min(x, y));

   }

    auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first; 
    };

    sort(m.begin(), m.end(), cmp);

int cnt =0;

cnt += m[0].first;
cnt += m[n-1].second;
vector <int> q, w;

   for (auto i : m)
   {
    q.push_back(i.first);
    w.push_back(i.second);
   }
   

   for (int i =1; i< q.size(); i++) 
   {
    cnt += (q[i-1] - q[i]);
    
   }
   for (int i=0; i< w.size(); i++) cnt+= w[i] *2;

   cout << cnt <<endl;


   
   
 }

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}