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
   int n, k; cin >> n >> k;

   int a[n];
   map <int , int > m;
   fr(i, n) {
    cin >> a[i];
    m[a[i]]++;
   }

   vector <int> v;
   for (auto i : m) v.push_back(i.second);

   sort(v.begin(), v.end(), greater<int>());

   if (v[0] < k)
   {
    cout<< n << endl;
    return;
   }

   cout << k-1 <<endl;






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