#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e3+123;
int vis[mx];
vector<int> adj[mx];
int w[mx];
int ww;

int prime[mx]; // 0 mane prime

void gen_prime()
{
    //memset(prime, true, sizeof(prime));
    for (int i =2; i <= mx; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i*i ; j <= mx; j += i)
            {
                prime[j] = 1;
            }
        }
    }

}

void dfs(int x)
{
    vis[x] =1;
    ww += w[x-1];
// cout << ww << " ";
    for (auto i : adj[x])
    {
        if (vis[i] != 1 && i > x)
        {
            dfs(i);
        }
    }


}

void solve ()
{
    gen_prime();
   int n, q; cin >> n >> q;

   //int w[n];
   fr(i,n) cin >> w[i];

   for (int i =0; i< n-1; i++)
   {
       int u, v; cin >> u >> v;

       adj[u].push_back(v);
       adj[v].push_back(u);


   }

   while (q--)
   { 
       int x; cin >> x;
       ww =0;

       //ww += w[x];

       dfs(x);


       (prime[ww] == 0) ? cout << "YES" << endl : cout << "NO" <<endl;
       
        //cout << ww << endl;

       for (int i =0; i< mx; i++)
       {
        vis[i] =0;
       }
       
       
   }
}

int main ()
{
    opt();
    solve();
  
}