#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define mx 200005
ll a[mx];
ll tree[mx * 4];

void init(ll node, ll b, ll e)
{
    if (b == e)
    {
        tree[node] = a[b];
        return;
    }
    ll left = node * 2;
    ll right = node * 2 + 1;
    ll mid = (b + e) / 2;

    init(left, b, mid);
    init(right, mid + 1, e);

    tree[node] = tree[left] + tree[right];
}

ll query (ll node, ll b, ll e, ll l, ll r)
{
    if (l > e || r < b)
    {
        return 0;
    }
    if (b >= l && e <= r)
    {
        return tree[node];
    }
    ll left = node * 2;
    ll right = node * 2 + 1;
    ll mid = (b + e) / 2;

    ll p1 = query(left, b, mid, l, r);
    ll p2 = query(right, mid + 1, e, l, r);

    return p1 + p2;
}
void solve ()
{
   
    ll n, q;
    cin>>n>>q;

    for (ll i=1; i<=n; i++) cin>>a[i];

    init(1, 1, n);
    

    for (ll i=0; i<q; i++)
    {
        ll l, r;
        cin>>l>>r;

        cout<<query(1, 1, n, l, r)<<endl;

    }  
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
}