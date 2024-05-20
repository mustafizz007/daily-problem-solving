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
   string a; cin >> a;

   map <char, int> m;

   for (int i =0; i<a.size(); i++)
   {
    m[a[i]]++;
   }
   if (m.size() == 1){
    no;
    return;
   }
   yes;
   string t = a;

   reverse(t.begin(), t.end());

//    cout << t << endl;

   if (a == t)
   {
    for (int i =1; i< a.size(); i++)
    {
        if (a[i-1] != a[i])
        {
            swap (a[i-1] , a[i]);
          
            break;
        }
    }
      cout << a << endl;
      return;
   }
   for (int i =1; i< a.size(); i++)
   {
    if (a[i-1] != a[i]){
        swap(a[i-1] , a[i]);
        break;

    }
   }
   cout << a << endl;

  
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