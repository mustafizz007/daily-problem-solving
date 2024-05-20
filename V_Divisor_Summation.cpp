#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ()
{
    int n; cin>>n;
    if (n == 1) 
    {
        cout<<0<<endl;
        return;
    }
int sum = 1;
set<int> ss;
    for (int i = 2 ; i<= sqrt(n); i++)
    {
        if (n % i == 0 )
        {
            
            
                ss.insert(i);
                ss.insert(n/i);
                
            
        }
    }
      
    for (auto i: ss) sum += i;
    cout<<sum<<endl;
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
