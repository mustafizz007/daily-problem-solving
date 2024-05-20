#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int p)
{
    int i = 2;
    while (i < p)
    {
        if (p % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int nxt(int n)
{
    int c = 1;
    while (!prime(c + n))
    {
        c++;
    }
    return c;
}

void solve ()
{
   int x, y;
   cin>>x>>y;
   int s = x+y;
   cout<<nxt(s)<<endl;
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}