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
   int n, m; cin >> n >> m;

   char a[n][m];

   fr(i, n)
   {
    fr(j,m) cin >>a[i][j];
   }
   bool ok1 = true, ok2 = true;
int b =0, w =0;

   for (int i =0, j =0; j < m-1; j++) {if (a[i][j] == 'B') b++;
   else w++;}

int bb =0, ww=0;

   for(int i = n-1, j = 0; j <m-1; j++) {
    if (a[i][j] == 'B') bb++;
    else ww++;
   }

   if (b == m && ww == m && b != ww or w == m && bb == m && w != bb){
    no;
    return;
   }
int b1=0, w1=0;
   for (int i =0, j =0; i < n -1; i++)
   {
    if (a[i][j] == 'B') b1++;
    else w1++;
   }
int b2= 0, w2 =0;
   for (int i =0, j = m-1; i < n-1; i++)
   {
    if (a[i][j] == 'B') b2++;
    else w2++;
   }

   if (b1 == n && w2 == n && b1 != w2 or w1 == n && b2 == n && w1 != b2){
    no;
    return;
   }

   yes;
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