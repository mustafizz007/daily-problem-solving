#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
   int n; cin >> n;
if (n == 2){
    no;
    return;
}
   vector <int>  a, b;

   for (int i =1; i <=n; i+=2)
   {
    a.push_back(i);
   }
   for (int i =0; i<=n; i+=2){
    if (i ==0) continue;
    b.push_back(i);
   } 


   if (a.size()==0 or b.size()==0 ){no;
   return;}
yes;
   cout<<a.size()<<" ";
   for (auto i : a) cout<< i <<" ";
   cout << endl;
   cout<<b.size()<<" ";
   for (auto i : b) cout<< i <<" ";
   cout << endl;


}

int main ()
{
    opt();
    
  
        solve();
  
}