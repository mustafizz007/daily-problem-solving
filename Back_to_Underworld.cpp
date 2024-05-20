#include <bits/stdc++.h>
using namespace std;

void coloring(vector<int> &adj, vector<bool> &color, vector<bool> &vis, int u)
{
    vis[u] = true;
    for (int v : adj[u])
    {
        if (!vis[v])
        {
            color[v] = !color[u];
            coloring(adj, color, vis, v);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> adj[n + 2];
        vector<bool> color(n + 1, false), vis(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                coloring(adj, color, vis, i);
        }

        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            cnt += color[i];
        }

        cout << max(n - cnt, cnt) << endl;
    }
}