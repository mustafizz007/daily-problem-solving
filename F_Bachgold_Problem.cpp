#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin>>n;
    if (n %2 !=0)
    {
        n -= 3;
        ll s = n/2;
        cout<<s+1<<endl;

                for (ll i=0; i<s; i++) cout<<2<<" ";
        cout<<3;




    }
    else{
        cout<< n /2<<endl;
        ll x = n/2;
        for (ll i=0; i<x; i++) cout<<2<<" ";
        cout<<endl;
    }
}