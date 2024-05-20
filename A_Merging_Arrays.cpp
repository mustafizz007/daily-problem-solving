#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{
   int n, m;
   cin>>n>>m;
   int a[n], b[m];
   for (int i=0; i<n; i++) cin>>a[i];
   for (int i=0; i<m; i++) cin>>b[i];

   int i=0, j =0, k=0;
int c[n+m];
   while (i<n or j < m)
   {
    if (j == m or i < n && a[i] < b[j])
    {
        c[k] = a[i];
        k++;
        i++;
    }
    else 
    {
        c[k] = b[j];
        k++;
        j++;
    }
   }
   for (auto  i : c) cout<<i<<" ";
}

int main ()
{
    opt();
    solve();
    
}