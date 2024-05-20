#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, f = 0;
    cin>>n>>m;
    char a[n][m];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (a[i][j] != 'W' && a[i][j] != 'B' && a[i][j] != 'G')
            {
                f =1;
                break;
            }
        }
    }
    if (f == 1) cout<<"#Color";
    else cout<<"#Black&White";
}
