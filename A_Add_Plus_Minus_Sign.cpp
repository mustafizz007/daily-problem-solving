#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n; cin>>n;
    string a; cin>>a;
    int cnt = a[0] - '0';
    for (int i=1; i<n; i++)
    {
        if (a[i] == '0' && cnt ==0)
        {
            cout<<"+"; 
        }
        else if(a[i] == '0' && cnt ==1)
        {
            cout<<"+";
        }
        else if(a[i] == '1' && cnt==1)
        {
            cout<<"-";
            cnt--;
        }
        else if (a[i] == '1' && cnt ==0)
        {
            cout<<"+";
            cnt++;
        }
    }
    cout<<endl;
   
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