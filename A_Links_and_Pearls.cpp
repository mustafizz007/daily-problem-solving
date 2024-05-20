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
   string a; cin >>  a;
int o= 0, d =0;
   for ( int i =0 ; i< a.size(); i++) 
   {
    if(a[i] == 'o') o ++;
    else d++;

   }
   if (o == 0 or d == 0){
    yes;
    return;
   }
   if (d < o){
    no;
    return;
   }

   if (d % o ==0) {
    yes;
   return;}


   no;

}

int main ()
{
    opt();
    
        solve();
}
   