#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    ll x, y; cin>>x>>y;

    ll  z = abs(x-y);
ll s =0;
    if (z %2 !=0)
    {
        ll xx = z /2;
        ll yy = (z/2) + 1;
        //cout<<xx<<yy<<endl;

        s += (xx * (xx+1)) /2;
        s += (yy* (yy +1)) /2;
    }
    else 
    {
        ll xx = z /2;
        ll yy = z /2;
        

        s += (xx * (xx +1)) /2;
        s += (yy * (yy +1)) /2;
        //cout<<s<<endl;
    }

    cout<<s<<endl;
}

int main ()
{
    
        solve();
    
}