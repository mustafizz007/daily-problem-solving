#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e6+123;
void solve ()
{
    int n; cin>>n;
    char c[n];  int a[n];

    for (int i=0; i<n; i++)
    {
        cin>>c[i]>>a[i];
    }
    int f[mx];
    memset(f, 0, sizeof(f));
    ll cnt =0, curr =0;
    for(int i=0; i < n; i++)
    {
        if (c[i] == '+')
        {
            curr++;
            f[a[i]] = 1;
           
        }
        else if (c[i] == '-')
        {
            if (f[a[i]] == 0)
            {
                cnt++;
                f[a[i]] = 1;
            }
            else if (f[a[i]] == 1)
            {
                curr--;
                f[a[i]] = 0;
            }
        } 
        cnt = max(cnt , curr);
    }
    cout<<cnt<<endl;

  // }
   
}

int main ()
{
    //opt();
   
        solve();
   
}