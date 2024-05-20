#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ll a[5];

    for (ll i=0;i<3; i++) cin>>a[i];

    sort(a, a+3, less<ll>());

    if ( a[0] == a[1] && a[1] == a[2] ) cout<<0; 

    else cout<< max (a[2] - a[0] , a[1] - a[0]) - 1;

   
}