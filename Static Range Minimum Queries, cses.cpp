#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void build (ll *tree, ll *a, ll node, ll l, ll r){
    if(l==r){
        tree[node] = a[l];
        return;
    }
 
    ll left = 2*node, right= left+1;
    ll mid = (l+r)/2; // l + (r-l)/2
    
    build(tree, a, left, l, mid);
    build(tree, a, right, mid+1, r);
 
    tree[node] = min(tree[left] , tree[right]);
}
 
ll query(ll *tree, ll *a, ll node, ll l, ll r, ll begin, ll end){
    if(r<begin || end<l) return LLONG_MAX;
    
    if(begin<=l && r<=end){
        return tree[node];
    }
 
    ll left = 2*node, right= left+1;
    ll mid = (l+r)/2; // l + (r-l)/2
 
    ll left_value = query(tree, a, left, l, mid, begin, end);
    ll right_value = query(tree, a, right, mid+1, r, begin, end);
 
    return min(left_value , right_value);
}

int main(){
    ll n, q;
    cin>>n>>q;
 
    ll a[n+2], tree[4*n];
    for(ll i=1;i<=n;i++) cin>>a[i];
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
 
    build(tree, a, 1, 1, n);
 
    for (ll i =1; i<=q; i++)
    {
        ll l , r;
        cin>>l>>r;
 
        cout<<query(tree, a, 1, 1, n, l, r)<<endl; 
    }  
}