#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
   int n,m; cin>>n>>m;
   int a[n][m];
   for(int i=1; i<=n; i++)
   {
    for (int j=1; j<=m; j++)
    {
        if (i%2!=0) cout<<'#';
        else if (i%4!=0 && j==m)cout<<'#';
        else if (i%4==0 && j==1)cout<<'#';
        else cout<<'.';
    }
    cout<<endl;
   }
}