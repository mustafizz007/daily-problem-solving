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

   string a; cin >> a;
   int cnt1=0, cnt2= 0;

   for (int i =0; i <n; )
   {

    if (a[i] == '1')
    {
        if (a[i+1] == '0') 
        {
            cnt1++;
            i+=2;
        }
        else i++;
    }
    else i++;
   }
   for (int i =0; i <n; )
   {

    if (a[i] == '0')
    {
        if (a[i+1] == '1') 
        {
            cnt2++;
            i+=2;
        }
        else i++;
    }
    else i++;
   }
   if (a[n-1] == '1' ) cnt1++;
   else cnt2++;

   
   //cout <<cnt1 << " " <<  cnt2 << endl;
   cout << min (cnt1, cnt2) << endl;
  
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