#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    
    if (n % 2 ==1 ) 
    {
        cout<<"Mike"<<endl;
        return;
    } 

    int m = 0;
    int x; 

    for (int i=0; i<n; i++)
    {
        if (a[i] < a[m])
        {
            m = i;
            //x = i;
        }
    }
    if (m % 2==0) cout<<"Joe"<<endl;
    else cout<<"Mike"<<endl;

    return;
   
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