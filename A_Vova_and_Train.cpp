#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
       int L,v,l,r;  cin>>L>>v>>l>>r;
       cout<<L/v - r/v + (l-1)/v<<endl;     
    }
}