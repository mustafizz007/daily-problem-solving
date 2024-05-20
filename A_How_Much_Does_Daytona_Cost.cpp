#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int f=0;
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i =0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n; i++)
        {
            if (a[i] == k)
            {
                f=1; 
                break;
            }
        }
        if (f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
