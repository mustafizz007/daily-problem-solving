#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

const ll mx = 1e5+123;
vector <ll> adj[mx];
ll vis[mx];
// ll cnt=1;

void dfs (ll x){

    vis[x] = 1;
    // cnt++;

    
    for (auto i : adj[x])
    {
        if (vis[i] == 0)
        {
            //cnt *= 2;
            vis[i] = 1;
            dfs(i);

        }
    }
    //return cnt*;
}

void solve ()
{
   ll n, e; cin >> n >> e;
//    ll u, v;

   for (int i =0; i < e; i++)
//    ll cnt1 =0;
//    while (cin >> u >> v)
   {

    ll u, v; cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
    // cnt1 ++;

   }

ll cnt =0;
   
//    vector <int> x;
// int ans =0;
   for (int i =0; i<=n; i++)
   {
    if (vis[i] == 1) continue;
    else {
        //x.push_back(dfs(i));
        // cnt++;
        dfs(i);
        cnt++;
    }
   }
   ll ans =  pow(2, n - cnt);//<< endl; 

   cout << ans << endl;

//    int mx = *max_element(x.begin(), x.end());

//    cout << mx << endl;

//    for (int i =1; i<= cnt1; i++)
//    {
//     cout << i <<" ";
//     for (auto j : adj[i])
//     {
//         cout << j <<" ";
//     }
//     cout <<endl;
//    }


}

int main ()
{
    opt();
    vis[0] =1;

        solve();
    
}