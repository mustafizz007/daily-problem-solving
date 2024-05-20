#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a.begin() , a.end());
        int cnt =0; 
        for(int i=1; i<n; i++) cnt += abs( a[0] - a[i] );
        cout<<cnt<<endl;  
    }
}