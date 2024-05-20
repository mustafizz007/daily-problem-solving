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
   int n;
   cin >>n;
   string a;
   cin>>a;

   int x=0, z=0;
   for (int i =0; i<n ;i++) 
   {
      if (a[i] == '>') 
      {
          x = i;
         break;
      }
   }
   for (int i = n-1 ; i >=0 ; i--)
   {
      if (a[i] == '<'){
         z = n-i-1;
         break;
      }
   }
   cout<<min(x , z)<<endl;

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