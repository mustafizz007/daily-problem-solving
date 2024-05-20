#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n; cin>>n;
   int a[n+2] = {};
   
   for (int i=1; i<=n; i++) cin>>a[i];
   int cnt=2;
int x = INT16_MIN;
int y = __INT16_MAX__;

cnt =2;
   for (int j =1; j<=n-2; j++)
   {
    for (int i =2; i<=n-1; i++)
    {
        if (i == cnt && cnt<n)
        {
            x = max (x, (a[i+1] - a[1]));
        }
        else{
            x = max(x, (a[i+1] - a[i]));
        }
//cout<<x<<" ";
    }
    //cout<<endl;

    cnt++;
    y = min(y, x);
    //cout<<y<<" ";
    
   }
   //cout<<endl;
  cout<<y<<endl;
}

int main ()
{
   solve();
    
}
