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

   if ( n == 1)
   {
    cout<< k << endl;
    return;
   }

   vector <int> a;
   int cnt =1;
   while (cnt <= k)
   {
    cnt *= 2;
   }
   cnt /= 2;
   //cout << cnt <<endl;
   a.push_back(cnt-1);
   a.push_back(k - (cnt -1));
int cnt2 =0;
   for (auto i : a) 
   {
    cout<< i << " ";
    cnt2 ++;
   }
   for (int i = cnt2 ; i< n; i++) cout << 0<< " ";
   cout<<endl;


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