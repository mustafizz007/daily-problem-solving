#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
  int x;
  int n; cin>>n;
  int a[n+2];
  a[0]=0;
  for(int i=1; i<=n; i++) cin>>a[i];
  int min=a[1];
  for (int i=1; i<=n; i++) if (a[i] < min) min = a[i];
  int cnt=0;
  int f=0;
  for (int i=1; i<=n; i++)
  {
    if (a[i] == min) 
    {
        cnt++;
        if (cnt ==2)
        {
          f=1;
          break;
        }
        else x = i;
    }
  }
  if(f==1) cout<<"Still Rozdil"<<endl;
  else cout<<x<<endl;
}