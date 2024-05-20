#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin>>n;

    string a;
    cin>>a;
    int cnt = a.size()-1;
    //cout<<cnt<<endl;

    for(int i =0; i <n; i++)
    {
        if (a[i] == 'B') cnt--;
        else break;
    }  
    for (int j = n-1; j>=0; j--)
    {
        if (a[j] == 'A')cnt--;
        else break;
    }
    (cnt < 0) ? cout<<0<<endl : cout<<cnt<<endl;
    //cout<<cnt<<endl;
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