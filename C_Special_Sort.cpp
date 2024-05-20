#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
   ll n; scanf("%lld", &n);
   vector<pair<ll , ll>> a;
   while (n--)
   {
    ll x, y; scanf("%lld %lld", &x, &y);
    a.push_back(make_pair(x, (y * -1)));

   }
   sort(a.begin(), a.end());
   for (auto i: a) printf("%lld %lld\n", i.first, i.second *-1);
   //cout<<i.first<<" "<<i.second *-1<<endl;

}

int main ()
{
    opt();
    ll t; scanf("%lld", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}