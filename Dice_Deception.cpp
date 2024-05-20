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

   for (int i=0; i<n; i++ ) cin>> a[i];
   sort(a, a+n);

   for (int i=0; i< n && k >0; i++)
   {
    if(a[i] == 1){
        a[i] = 6;
        k--;
    }
    else if (a[i] == 2)
    {
        a[i] = 5;
        k--;
    }
    else if (a[i] == 3)
    {
        a[i] = 4;
        k --;
    }
   }
//    for (int i=0; i<n ;i++) cout<<a[i]<< " ";
//    cout<<endl;
   int cnt = 0;
   for (auto i : a) cnt+= i;
   cout<< cnt<< endl;


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