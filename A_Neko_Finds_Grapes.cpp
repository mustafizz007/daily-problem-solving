#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, m;
   cin>>n>>m;

   int a[n], b[m];

   for (int i=0; i<n; i++) cin>>a[i];
   for (int i=0; i<m; i++) cin>>b[i];

  
int chest_e =0, chest_o=0;
   for (int i =0; i<n; i++)
   {
    if (a[i] % 2==0) chest_e++;
    else if (a[i] % 2 !=0 ) chest_o++;
   }
  // cout<<chest_e<<" "<<chest_o<<endl;
int key_e=0, key_o=0;
   for (int i=0; i<m; i++)
   {
    if (b[i] % 2==0) key_e++;
    else if (b[i] %2 !=0) key_o++;
   }
  // cout<<key_e<<" "<<key_o<<endl;

  int cnt1 = min(chest_o , key_e);
  int cnt2 = min(chest_e, key_o);

  cout<<cnt1+cnt2<<endl;

}

int main ()
{
    
        solve();
    
}