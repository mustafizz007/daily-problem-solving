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

   int a[n];
   map <int , int> m;

   fr(i,n){
    cin >> a[i];
    
   }

   sort (a, a+n);

   for (auto i : a) m[i]++;

   if (m.size() == 1){
    cout<<"Alice"<<endl; return;
   }

   bool ok = true;
int x=0;
   for (int i =1; i<n; i++)
   {
    if (a[i] - a[i-1] != 1){
        x = i;
        break;

    }
   }
int y =0;
   for (int i = n-1; i>=0; i--)
   {
    if (a[i] - a[i-1] != 1)
    {
        y = i;
        break;
    }
   }

   if (y % 2 == 0)

  
   if (x == n-1){
    (a[n-1] % 2==0) ? cout << "Bob" <<endl : cout << "Alice" << endl;
    return;
   }

   
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