#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;

        if (n<=3)
        {
            for (int i=1; i<=n; i++) cout<<i<<" ";
            

        }
        else 
        {
            int x = n/2 +1;
            int y = 1;
            while (x <= n)
            {
                cout<<x<<" "<<y<<" ";
                x++;
                y++;
                if (x==n && n%2!=0)
                {
                    cout<<x<<" ";
                    break;

                }
            }
          
        }
        cout<<endl;

    }
}