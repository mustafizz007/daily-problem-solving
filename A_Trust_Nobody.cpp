#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
int cnt =0;
   int a[n];
   for (int i =0; i<n; i++) cin>>a[i];

   for (int i =0; i<n; i++)
   {
    for (int j =0; j<n; j++)
    {
        if (a[j] > i) cnt++;
    }
    if (cnt == i) 
    {
        cout<<cnt<<endl;
        return;
    }
   
   }
   cout<<-1<<endl;


  
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}