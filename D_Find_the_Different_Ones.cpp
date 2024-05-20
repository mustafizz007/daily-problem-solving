#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+2], dp[n+3]={};

        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(i!=1){
                if(a[i]!=a[i-1]) dp[i] = i-1;
                else dp[i]=dp[i-1];
            }
        }

        int q; cin>>q;
        while(q--){
            int l, r;
            cin>>l>>r;
            if(dp[r]<l) cout<<-1<<" "<<-1<<endl;
            else cout<<dp[r]<<" "<<r<<endl;
        }
            cout<<endl;
    }
}