#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int mx = 1000000;
int pr[mx];

void gen_prime(int n)
{
    for (int p = 2; p <= mx; p++)
    {
        if (pr[p] == 0)
        {
            for (int i = p*p; i <= mx; i += p)
            {
                pr[i] = 1;
            }
        }
    }

}
void solve ()
{
   ll n; cin>>n; 
   ll a[n];

   for (int i=0; i<n; i++) cin>>a[i];

   for (int i=0; i<n; i++)
   {
    ll x = a[i];

    ll xx = sqrt(x);

    if (xx * xx == x && pr[xx] == 0)
    {
        yes;
        return;

    }
     no;
   }
}

int main ()
{
    opt();
    gen_prime(mx);
    
        
    solve();
    
}
