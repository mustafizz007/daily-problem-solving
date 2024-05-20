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
   int n , c , d;

   cin >> n >> c >> d;

vector<int> a( n * n);

   for (int i =0; i<n*n; i++) cin >> a[i];

   int mn = *min_element(a.begin(), a.end());
   //cout<<mn<<endl;

   sort( a.begin() , a.end());

 vector<vector<int>> b(n, vector<int>(n));

   b[0][0] = mn;
vector<int> v;
   for (int i =1; i< n ; i++) 
   {
    b[i][0] = b[i-1][0] + c; 
   }
  

   for (int i =0; i< n ; i++)
   {
    for (int j =1; j < n ; j++ )
    {
        b[i][j] = b[i][j-1] + d;
    }
   }
   for (int i =0; i<n ; i++)
   {
    for(int j=0; j< n; j++) 
    {
       // cout<<b[i][j]<<" ";
       v.push_back(b[i][j]);
    }

   }
   sort ( v.begin() , v.end());

   if ( a == v) {yes;}
   else {no;}


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