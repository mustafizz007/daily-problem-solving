#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int a[10][10] = {}, x = INT16_MIN;
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i<6 -2; i++)
    {
        for (int j =0; j<6 -2; j++ )
        {
            x = max(x, (a[i][j] + a[i][j + 1] + a[i][j+2] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2] + a[i+1][j+1]));
        }
            //cout<<x<<endl;
    }
    cout<<x<<endl;
   


   
}

int main ()
{
    
        solve();
}