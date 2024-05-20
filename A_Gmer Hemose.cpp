#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t; cin>>t;
    while (t--)
    {
        //int cnt =0;
        int n,h; cin>>n>>h;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a.rbegin(), a.rend());
        //for (auto i : a) cout<<i<<" ";
        //cout<<a[0]<<" "<<a[1];
        int cnt  = (h / (a[0] + a[1])) * 2; 
        //if (cnt == 0) //cnt++;
        if(cnt <= a[0]) cnt+=1;
        else cnt+=2; 
        /*while (1)
        {
            if (h<=0) break;
            h = h - a[0];
            cnt++;
            if (h<=0) break;
            h = h-a[1];
            cnt++;
            if (h<=0) break;
        }
        //cout<<endl;*/
        cout<<cnt<<endl;
    }
    
}