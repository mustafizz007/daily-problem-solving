#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        int a[n];
        for (int i=0; i<n; i++) cin>>a[i];

        deque<int> f (k);

        vector<int> mx;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<k; j++)
            {
                f.push_back(a[i]);
            }
            mx.push_back(*max_element(f.begin(), f.end()));
        }
        for (int i=0; i< mx.size(); i++) cout<<mx[i]<<" ";
        cout<<endl;
        
       
    }
}