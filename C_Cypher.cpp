#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++) cin>>a[i];

        vector <int> cnt;

        for (int i =0; i<n; i++)
        {
            int x; cin>>x;
            string m; cin>>m;

            int dwn = 0;
            int up = 0; 

            for (auto j : m)
            {
                if (j == 'D') dwn++;
                else if (j == 'U')up--;
            } 

            int z = (up + dwn);

            if (a[i] + z >= 10 ) a[i] = (a[i] + z) % 10;
            else if ( ( a[i] + z ) < 0 ) a[i] = ( a[i] + z + 10 ) % 10;
            else a[i] = a[i] + z;
        } 
        for (int i = 0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}