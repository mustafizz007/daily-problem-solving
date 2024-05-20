#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taken massive help, the code only functions if written exactly like this 
    // same logic doesnt work if done in any other way
    
/*#include<bits/stdc++.h>
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
*/
   int a[1000000] = {0};
    for (int i=2; i<= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i*j<= 1000000; j++)
            {
                a[i*j] = 1;
            }
        }
    }
    int n;cin>>n;
    long long int b;
    long long int sq;
    for (int i=0; i<n; i++)
    {
        cin>>b;
        sq = sqrt(b);

        if (b==1) cout<<"NO"<<endl;

        else if (sq * sq == b && (a[sq] == 0))
        {
            cout<<"YES"<<endl;
        }

        else cout<<"NO"<<endl;
    }
}
