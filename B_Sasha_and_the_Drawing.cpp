#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, k; cin>>n>>k;
   //if (k <= 9)
   //{
    if ( ((4*n) -2 ) <= k)
    {
        (k % 2 == 0) ? cout<<(k /2)+1<<endl : cout<<( (k+1) /2 )+1<<endl;
    }
    else
    {
        if ( k % 2 ==0)
        {
            cout<<k/2<<endl;
        }
        else
        {
            cout<<(k+1)/2<<endl;
        }
      
    }
   //
  // else cout<<6<<endl;

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