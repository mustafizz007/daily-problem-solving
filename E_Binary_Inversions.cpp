#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll n, vector<ll> &a)
{
    ll one =0;
    ll cnt =0;
    for(int i=0; i<n; i++)
    {
        if (a[i] == 1)
        {
            one ++;
        }
        else 
        {
            cnt += one;
        }
    }
    return cnt;
}

void solve ()
{
    ll n;
    cin>>n;

    ll cnt =0;

    vector<ll> a(n);
    for (int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    cnt = calc(n, a);

    ll x;
    for (int i=0; i<n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
           // x = calc(n, a);
            cnt = max(cnt, calc(n, a));
            a[i] = 0;
            break;
        }
    }
    ll y;
    for (int i =n-1; i>= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            //y = calc(n, a);
            cnt = max (cnt , calc(n, a));
            a[i] = 1;
            break;
        }
    }
   //cout<<max(cnt, max(x, y))<<endl;
   cout<<cnt<<endl;
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