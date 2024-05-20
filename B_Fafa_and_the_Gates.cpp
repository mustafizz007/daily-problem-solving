#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n; cin>>n;

   int cnt = 0;

   string a ;
   cin>>a;
int x =0, y =0;
   for (int i =0; i<n; i++)
   {
    if (a[i] == 'U') 
    {
        y++;
    }
    else if (a[i] == 'R') {
        x++;
    }
    //cout<<x<<" "<<y<<endl;
    if (x == y && a[i] == a[i+1]) cnt++;
   }
   cout<<cnt<<endl;
}

int main ()
{
    opt();
    
        solve();
  
}