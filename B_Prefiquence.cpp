#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
   int n, m;
    cin >> n>> m;
    
    string a, b;
    cin >> a >> b;
int ans =0;
    for (int i =0, j =0; i< a.size(), j < b.size(); ){



            if (a[i] == b[j]){
                ans++;

                i ++;
                j ++;
            }
            else {

                j++;
            }
 
    }
    cout << ans <<endl;
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