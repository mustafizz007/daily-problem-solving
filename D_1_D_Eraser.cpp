#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--){
    int n,k;
    int cnt=0;
    cin>>n>>k;
    string a;
    cin>>a;
    for (int i=0; i<n;)
    {
        if (a[i] == 'B')
        {
            //cnt++;
            i = i+k;
            cnt++;
        }
        else i++;
    }
    cout<<cnt<<endl;
    }
}