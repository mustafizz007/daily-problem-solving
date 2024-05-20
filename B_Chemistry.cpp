#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define SIZE 26

int main ()
{
    int t; cin>>t;
    while (t--)
    {
      int n, k; cin>>n>>k;
      string a; cin>>a;

      map <char, int> m;

      for (int i=0; i<n; i++) m[a[i]]++;
      //for (auto i : m) cout<<i.first<<i.second<<endl;
      //cout<<endl;
      int e=0,o=0;
      for (auto x: m)
      {
        if (x.second % 2==0) e++;
        else o++;
      }
      if (o-1 > k) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;








     
       
       
    }
}