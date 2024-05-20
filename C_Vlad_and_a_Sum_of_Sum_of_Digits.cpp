#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define speed()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll sumi(ll i)
{
    ll s = 0;
    while (i != 0)
    {
        s += i % 10;
        i /= 10;
    }
    return s;
}

int main()
{

    speed();

    ll s = 0;

    vector<ll> v(299999);

    for (ll i = 1; i <=299999; i++)
    {
        s += sumi(i);
        v[i] = s;
    }
   
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n] << endl;
    }
}
