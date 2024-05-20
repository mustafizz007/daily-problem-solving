#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e9+123;

void solve ()
{
   ll n, k;
   cin>>n>>k;

ll cnt =0;
vector<ll> div;


   for (ll i=1; i<= sqrt(n); i++)
   {
    if (n % i ==0 ) 
    {
        if ((n / i) != i)
        {
            div.push_back(n/i);
            div.push_back(i);
        }
        else div.push_back(i);
    }
   }
   
   sort(div.begin(), div.end());
   (k > div.size()) ? cout<<-1<<endl : cout<<div[k-1]<<endl;
  
}

int main ()
{
    opt();
    solve();
    
}