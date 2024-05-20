#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve ()
{

    string a;
    cin>>a;

    int hr = stoi(a.substr(0,2));
    //int
    string min = (a.substr(3, 2));
string day = " AM";
    if (hr >= 12) day = " PM";

    if (hr == 0 or hr == 12)
    {
        cout<<12<<":"<<min<<day<<endl;
    }

    else 
    {
        int z = hr % 12;
if (z < 10)
{
    cout<<0<<z<<":"<<min<<day<<endl;
}
        else cout<<z<<":"<<min<<day<<endl;
    }


    

  


   
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