#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   string a; cin>>a;
   int s = 0;
   for (ll i =0; i<a.size(); i++) s += a[i] - '0';

int cnt =1;
int s2=0;

if (a.size() ==1) 
{
    cout<<0<<endl;
    return;
}

   while (s > 9)
   {
    
    int n = s;
    while (n != 0)
    {
     
        s2 += n % 10;
        n /= 10;
        
    }
    s = s2;
    s2=0;
    cnt++;

   }
   cout<<cnt<<endl;


}

int main ()
{
    opt();
  
        solve();
  
}